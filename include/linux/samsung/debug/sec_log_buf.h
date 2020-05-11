#ifndef __SEC_LOG_BUF_INDIRECT
#warning "samsung/debug/sec_log_buf.h is included directly."
#error "please include sec_debug.h instead of this file"
#endif

#ifndef __INDIRECT__SEC_LOG_BUF_H__
#define __INDIRECT__SEC_LOG_BUF_H__

#ifdef CONFIG_SEC_LOG_BUF_NO_CONSOLE
/* called @ kernel/printk/printk.c */
void sec_log_buf_write(const char *s, unsigned int count);
#else
static inline void sec_log_buf_write(const char *s, unsigned int count) {}
#endif

#endif /* __INDIRECT__SEC_LOG_BUF_H__ */
