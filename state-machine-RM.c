#include <stdio.h>
#include <string.h>

//下列定义可以直接使用
// 状态枚举
typedef enum {
LOCKED = 0,
CONTINUOUS,
TRIGGERED,
REVERSE
} MotorState;
// 事件枚举
typedef enum {
START = 0,
STOP,
FIRE,
SWITCH,
STUCK
} MotorEvent;
//读取单行终端输入
MotorEvent get(void) {
char buf[4] = {0};
fgets(buf, sizeof(buf), stdin);
buf[strlen(buf)-1] = '\0'; // 去掉换行符
if (strcmp(buf, "ru") == 0) {
return START;
} else if (strcmp(buf, "st") == 0) {
return STOP;
} else if (strcmp(buf, "fi") == 0) {
return FIRE;
} else if (strcmp(buf, "sw") == 0) {
return SWITCH;
}
return STOP; // 默认返回 STOP
}
int main() {
    MotorState state = LOCKED; 
    MotorState previousState = LOCKED;
    int firedCount = 0; 
    int continuousFireCount = 0; 

    while (1){
        MotorEvent event=get(); 

        switch (state){
            case LOCKED:
                if (event == START) {
                    previousState = LOCKED; 
                    state = CONTINUOUS;
                    printf("SWITCH TO CONTINUOUS!\n");
                    continuousFireCount = 0; 
                }
                break;
            case CONTINUOUS:
                if (event == STOP) {
                    previousState = CONTINUOUS;
                    state= LOCKED;
                    printf("MOTOR LOCKED!\n");
                } else if (event == FIRE) {
                    for(continuousFireCount = 0; continuousFireCount < 5; continuousFireCount++) {
                        firedCount++;
                        printf("FIRE!\n");
                         if (firedCount >= 7) {
                            previousState = CONTINUOUS;
                    state = REVERSE;
                    printf("STUCK!MOTOR REVERSING!\n");
                    firedCount = 0; }
                }
                    }
                    else if (event == SWITCH) {
                    previousState = CONTINUOUS;
                    state = TRIGGERED;
                    printf("SWITCH TO TRIGGERED!\n");
                }
                else if (event == STUCK) {
                    previousState = CONTINUOUS;
                    state = REVERSE;
                    printf("STUCK!MOTOR REVERSING!\n");
                }break;
            case TRIGGERED:
                if (event == STOP) {
                    previousState = TRIGGERED;
                    state = LOCKED;
                    printf("MOTOR LOCKED!\n");
                }
                 else if (event == FIRE) {
                    printf("FIRE!\n");
                    firedCount++;
                 if (firedCount >= 7) {
                    previousState = TRIGGERED;
                    state = REVERSE;
                    printf("STUCK!MOTOR REVERSING!\n");
                    firedCount = 0; 
                }
            }
                else if (event == SWITCH) {
                    previousState = TRIGGERED;
                    state = CONTINUOUS;
                    printf("SWITCH TO CONTINUOUS!\n");
                } else if (event == STUCK) {
                    previousState = TRIGGERED;
                    state = REVERSE;
                    printf("STUCK!MOTOR REVERSING!\n");
                }break;
            case REVERSE:
                if (state == REVERSE) {
                    if (previousState == CONTINUOUS) {
                        state = CONTINUOUS;
                        printf("SWITCH TO CONTINUOUS!\n");
                    } else if (previousState == TRIGGERED) {
                        state = TRIGGERED;
                        printf("SWITCH TO TRIGGERED!\n");
                    } else {
                        state = LOCKED;
                        printf("MOTOR LOCKED!\n");
                    }
                    firedCount = 0;
                    continuousFireCount = 0;
                } break;
            default:
                break;    
        }

    }

return 0;
}