#include <common.h>

#if defined(CONFIG_VIDEO_DM36X)
#include <video_fb.h>
#include "videomodes.h"
#include <asm/arch/video_def.h>


void *video_hw_init (void)
{
    debug ("@ in video_hw_init()\n");

    return (NULL);
}



#endif // CONFIG_VIDEO_DM36X
