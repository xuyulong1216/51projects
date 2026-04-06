#define uint unsigned int 
#define uchar unsigned char
#include <8051.h>

// ============ 定义 STC8G 特有寄存器 ============
// 端口配置
__sfr __at(0xB1) P3M1;
__sfr __at(0xB2) P3M0;
__sfr __at(0x8E) AUXR;          // 辅助寄存器

// PCA 相关寄存器
__sfr __at(0xD8) CCON;          // PCA 控制寄存器
__sfr __at(0xD9) CMOD;          // PCA 模式寄存器
__sfr __at(0xE9) CL;            // PCA 计数器低字节
__sfr __at(0xEA) CH;            // PCA 计数器高字节

// PCA 模块1 寄存器 (对应 P3.3) [citation:2][citation:6]
__sfr __at(0xDB) CCAPM1;        // 模块1 模式寄存器
__sfr __at(0xEB) CCAP1L;        // 模块1 比较值低字节
__sfr __at(0xFB) CCAP1H;        // 模块1 比较值高字节
__sfr __at(0xF3) PCA_PWM1;      // 模块1 PWM 辅助寄存器

void main{
    
}