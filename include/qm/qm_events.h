/*.$file${../::include::qm::qm_events.h} vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv*/
/*
* Model: main.qm
* File:  ${../::include::qm::qm_events.h}
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
/*.$endhead${../::include::qm::qm_events.h} ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
#ifndef __QM_EVENTS_H__
#define __QM_EVENTS_H__

#include "qpc.h"


typedef struct key_evt_t
{
    QEvt super;
    uint8_t id;
    uint8_t state;
} key_evt_t;

typedef struct uart_evt_t
{
    QEvt super;
    uint8_t byte;
} uart_evt_t;



#endif