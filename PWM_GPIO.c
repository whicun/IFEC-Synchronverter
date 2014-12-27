#include "DSP28x_Project.h"
#include "C28x_FPU_FastRTS.h"
#include "PWM_Function.h"
#include "PWM_Parameter.h"
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//GPIO���ã�67��68��69Ϊ��������
void Gpio_setup(void)
{
	//GPIO67
	EALLOW;
	GpioCtrlRegs.GPCMUX1.bit.GPIO67=0; //����I/Oģʽ
	GpioCtrlRegs.GPCPUD.bit.GPIO67=0; //�ڲ���������
	GpioCtrlRegs.GPCDIR.bit.GPIO67=0; //����Ϊ���뷽��
	EDIS;

	//GPIO68
	EALLOW;
	GpioCtrlRegs.GPCMUX1.bit.GPIO68=0; //����I/Oģʽ
	GpioCtrlRegs.GPCPUD.bit.GPIO68=0; //�ڲ���������
	GpioCtrlRegs.GPCDIR.bit.GPIO68=0; //����Ϊ���뷽��
	EDIS;

	//GPIO69
	EALLOW;
	GpioCtrlRegs.GPCMUX1.bit.GPIO69=0; //����I/Oģʽ
	GpioCtrlRegs.GPCPUD.bit.GPIO69=0; //�ڲ���������
	GpioCtrlRegs.GPCDIR.bit.GPIO69=0; //����Ϊ���뷽��
	EDIS;

	//GPIO04
	EALLOW;
	GpioCtrlRegs.GPAMUX1.bit.GPIO4=0;
	GpioCtrlRegs.GPAPUD.bit.GPIO4=0; //�ڲ���������
	GpioCtrlRegs.GPADIR.bit.GPIO4=1; //����Ϊ�������
	EDIS;

	//GPIO05
	EALLOW;
	GpioCtrlRegs.GPAMUX1.bit.GPIO5=0;
	GpioCtrlRegs.GPAPUD.bit.GPIO5=0; //�ڲ���������
	GpioCtrlRegs.GPADIR.bit.GPIO5=1; //����Ϊ�������
	EDIS;
}