/*.$file${../::include::qm::qm_led.h} vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv*/
/*
* Model: led.qm
* File:  ${../::include::qm::qm_led.h}
*
* This code has been generated by QM 5.0.1 <www.state-machine.com/qm/>.
* DO NOT EDIT THIS FILE MANUALLY. All your changes will be lost.
*
* This code is covered by the following QP license:
* License #   : QPC-EVAL
* Issued to   : Institution or an individual evaluating the QP/C framework
* Framework(s): qpc
* Support ends: 2020-12-31
* Product(s)  :
* This license is available only for evaluation purposes and
* the generated code is still licensed under the terms of GPL.
* Please submit request for extension of the evaluaion period at:
* <www.state-machine.com/licensing/#RequestForm>
*/
/*.$endhead${../::include::qm::qm_led.h} ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
#ifndef __QM_LED_H__
#define __QM_LED_H__


#include "qm/qm_common.h"

/*.$declare${base::ao_qm_led} vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv*/
extern QActive * const ao_qm_led;
/*.$enddecl${base::ao_qm_led} ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/

/*.$declare${base::qm_led_ctor} vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv*/
/*.${base::qm_led_ctor} ....................................................*/
void qm_led_ctor(void);
/*.$enddecl${base::qm_led_ctor} ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/

#endif
