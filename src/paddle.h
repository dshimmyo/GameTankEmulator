#ifndef PADDLE_H
#define PADDLE_H

#include "SDL_inc.h"
#include <stdbool.h>
#include <stdint.h>

// Configuration & State Flags
extern bool joystick_paddle_enabled;
extern bool paddleDetected;
extern SDL_JoystickID paddle_instanceID;
extern int32_t currentPaddleRawValue;

// Function Declarations
void PaddleInit(void);
void PaddleCleanup(void);

#endif // PADDLE_H