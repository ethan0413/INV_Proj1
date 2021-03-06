#ifndef _INV_ADT7462_H
#define _INV_ADT7462_H



// U90 G3
#define FAN_CONTROL1   0x010103B0  // bit 0-7 : slave addr, bit 8-15: I2C channel, bit 16-23: driver id, bit 24-32: I2C switch channel id
#define FAN_CONTROL2   0x010203B8
#define FAN_CONTROL3   0x800303B0

/* Fan speed measurement register */
#define FANSPE_TACH1_LOW     0x98
#define FANSPE_TACH1_HIGH    0x99
#define FANSPE_TACH2_LOW     0x9A
#define FANSPE_TACH2_HIGH    0x9B
#define FANSPE_TACH3_LOW     0x9C
#define FANSPE_TACH3_HIGH    0x9D
#define FANSPE_TACH4_LOW     0x9E
#define FANSPE_TACH4_HIGH    0x9F

#define FANSPE_TACH5_LOW     0xA2
#define FANSPE_TACH5_HIGH    0xA3
#define FANSPE_TACH6_LOW     0xA4
#define FANSPE_TACH6_HIGH    0xA5
#define FANSPE_TACH7_LOW     0xA6
#define FANSPE_TACH7_HIGH    0xA7
#define FANSPE_TACH8_LOW     0xA8
#define FANSPE_TACH8_HIGH    0xA9

#define SESFANSPE_TACH1_LOW     0x98
#define SESFANSPE_TACH1_HIGH    0x99
#define SESFANSPE_TACH2_LOW     0x9A
#define SESFANSPE_TACH2_HIGH    0x9B
#define SESFANSPE_TACH3_LOW     0x9C
#define SESFANSPE_TACH3_HIGH    0x9D
#define SESFANSPE_TACH4_LOW     0x9E
#define SESFANSPE_TACH4_HIGH    0x9F

#define SESFANSPE_TACH5_LOW     0xA2
#define SESFANSPE_TACH5_HIGH    0xA3
#define SESFANSPE_TACH6_LOW     0xA4
#define SESFANSPE_TACH6_HIGH    0xA5
#define SESFANSPE_TACH7_LOW     0xA6
#define SESFANSPE_TACH7_HIGH    0xA7
#define SESFANSPE_TACH8_LOW     0xA8
#define SESFANSPE_TACH8_HIGH    0xA9


/* Fan control register */
#define CONFIGURATION_REGISTER1 0x01
#define CONFIGURATION_REGISTER2 0x02
#define TACH_ENABLE 			    0x07

#define MIN_PWM1_DUTY_REG		    0x28
#define MIN_PWM2_DUTY_REG		    0x29
#define MIN_PWM3_DUTY_REG		    0x2A
#define MIN_PWM4_DUTY_REG		    0x2B
#define MAX_PWM_DUTY_REG		    0x2C

#define PWM1_CONFIG_REG		0x21
#define PWM2_CONFIG_REG		0x22
#define PWM3_CONFIG_REG		0x23
#define PWM4_CONFIG_REG		0x24

#define PWM1_2_FREQUENCY_REG    0x25
#define PWM3_4_FREQUENCY_REG    0x26

#define FANCTRL_CUR_PWM1_DUTY_CYCLE_REG			0xAA
#define FANCTRL_CUR_PWM2_DUTY_CYCLE_REG			0xAB
#define FANCTRL_CUR_PWM3_DUTY_CYCLE_REG			0xAC
#define FANCTRL_CUR_PWM4_DUTY_CYCLE_REG			0xAD

#define SESFANCTRL_CUR_PWM1_DUTY_CYCLE_REG			0xAA
#define SESFANCTRL_CUR_PWM2_DUTY_CYCLE_REG			0xAB
#define SESFANCTRL_CUR_PWM3_DUTY_CYCLE_REG			0xAC
#define SESFANCTRL_CUR_PWM4_DUTY_CYCLE_REG			0xAD

#define FANCTRL_FAN_NOT_PRESENT_REG				0xC5

#define FAN_STATUS_REG    0xBD

// About init process reg
#define FANCTRL_TACH_ENABLE_REG 					0x07
#define FANCTRL_PWM12_FREQ						0x25
#define FANCTRL_PWM34_FREQ						0x26

#define SESFANCTRL_CFG_REG							0x07
#define SESFANCTRL_PWM1_PWM2						0x25
#define SESFANCTRL_PWM3_PWM4						0x26

#define FANCTRL_DEVICE_ID						0x3D
#define FANCTRL_COMPANY_ID					0x3E

// register value
#define FANCTRL_CFG_START							0xFF
#define FANCTRL_CFG_STOP							0x00

// register default value
#define FAN_DEFAULT_DEVICE_ID 0x62
#define FAN_DEFAULT_COMPANY_ID 0x41
#define FAN_DEFAULT_FAILED_TACH_VAULE 0xFF
#define FAN_DEFAULT_FAILED_TACH_VAULE2 0xFF


// Fan register value
#define CONFIG_START   0xFF
#define CONFIG_TEST   0x02
#define CONFIG2_FREQ   0x20
#define FANPULSES      0x55
#define PWMCONFIG_INIT 0x00


typedef enum _Inv_ADT7462_FAN_CONTROLLER_ID
{
    Inv_ADT7462_FAN_0 = 0x98,
    Inv_ADT7462_FAN_1 = 0x9A,
    Inv_ADT7462_FAN_2 = 0x9C,
    Inv_ADT7462_FAN_3 = 0x9E,
    Inv_ADT7462_FAN_4 = 0xA2,
    Inv_ADT7462_FAN_5 = 0xA4,
    Inv_ADT7462_FAN_6 = 0xA6,
    Inv_ADT7462_FAN_7 = 0xA8
} Inv_ADT7462_FAN_CONTROLLER_ID;

	
#endif 


