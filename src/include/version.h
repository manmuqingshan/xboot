#ifndef __VERSION_H__
#define __VERSION_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <xboot.h>
#include <console/console.h>

/*
 * xboot's version
 */
#define	XBOOT_MAJOY					"1"
#define	XBOOT_MINIOR				"5"
#define	XBOOT_PATCH					"0"
#define	XBOOT_VERSION				XBOOT_MAJOY "." XBOOT_MINIOR "." XBOOT_PATCH

const char * xboot_banner_string(void);
void xboot_char_logo(struct console_t * console, u32_t x0, u32_t y0);

#ifdef __cplusplus
}
#endif

#endif /* __VERSION_H__ */
