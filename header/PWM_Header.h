#ifndef PWM_HEADER_H_
#define PWM_HEADER_H_
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//PWM_Main.c��ز���
#define PWMS_FRC_DISABLE 0x0000 //�궨�壬��ֹePWMģ��ǿ�ƹ���
#define PWMS_ALBL 0x0005 //�궨�壬ǿ��A�͵�ƽ��B�͵�ƽ
#define PWMS_AHBH 0x000A //�궨�壬ǿ��A�ߵ�ƽ��B�ߵ�ƽ
#define PWMS_AHBL 0x0006 //�궨�壬ǿ��A�ߵ�ƽ��B�͵�ƽ
#define PWMS_ALBH 0x0009 //�궨�壬ǿ��A�͵�ƽ��B�ߵ�ƽ
#define EPwm1_TIMER_TBPRD 7500 //PWMƵ������
#define EPwm2_TIMER_TBPRD 7500 //PWMƵ������
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//PWM_Calculate.c��ز���
#define pie 3.14159
#define T 0.0001 //PWMƵ�ʺ���������
//#define a_filter 0.031416 //��ͨ�˲����˲�ϵ��
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//PWM_Main.c��غ���
interrupt void epwm1_timer_isr(void); //epwm1�ж�
void InitEPwm1(void);
void InitEPwm2(void);
void ADCInit(void);
void ReadADC(unsigned int *p);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//PWM_Calculate.c��غ���
void CalculateInit(void);
void vg_sample(void);
void i_sample(void);
void Pset_cal(void);
void Pd_cal(void);
void Qset_cal(void);
void Qd_cal(void);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//�Դ���غ���
float32 sqrt(float32 input); //�������� FPU
float32 sin(float32 input); //��������FPU
float32 cos(float32 input); //��������FPU
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//����������
float32 P_Mean(float32 input);
float32 Filter(float32 input,float32 input_1,float32 a_filter);
float32 Q_Mean(float32 input);
float32 Vg_RMS(float32 input);
float32 Q_Mean(float32 input);
#endif /* PWM_HEADER_H_ */