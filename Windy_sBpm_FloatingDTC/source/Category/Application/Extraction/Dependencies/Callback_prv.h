/**
 *  @file
 *  @brief      Private parameters for the Callback module.
 *
 *  $Header: Callback_prv.h 1.3 2015/12/18 17:13:56EST Paul F Spindler (SPINDPF) Exp  $
 *
 *  @copyright  Copyright 2013 - $Date: 2015/12/18 17:13:56EST $  Whirlpool Corporation.  All rights reserved - CONFIDENTIAL.
 */
#ifndef CALLBACK_PRV_H_
#define CALLBACK_PRV_H_

//#include "Log.h"

//=====================================================================================================================
//-------------------------------------- PRIVATE (Variables, Constants & Defines) -------------------------------------
//=====================================================================================================================

//! Declaration for the Log module macros to identify this module.
#define MODULE_NAME MODULE_CALLBACK

//! List of log message IDs that are generated by this module.
typedef enum MODULE_CALLBACK_LOG_MESSAGE_ID_ENUM
{
    HANDLER_ALREADY_REGISTERED,
    HANDLER_ALREADY_UNREGISTERED,
    NO_SPACE_TO_REGISTER_HANDLER,
    ATTEMPT_TO_REGISTER_NULL_HANDLER,
    ATTEMPT_TO_UNREGISTER_NULL_HANDLER,
    CONTROL_IS_NULL,
    REGISTRY_CORRUPTED
} MODULE_CALLBACK_LOG_MESSAGE_ID_TYPE;

//! Debug macro called when an attempt is made to register a handler that is already registered.
//! @param handler = The handler that is already registered.
#define HANDLER_IS_ALREADY_REGISTERED(handler)  //LOG_ADD_EXCEPTION(HANDLER_ALREADY_REGISTERED, (LOG_DATA_TYPE)handler)

//! Debug macro called when an attempt is made to unregister a handler that is already unregistered.
//! @param handler = The handler that is already unregistered.
#define HANDLER_IS_ALREADY_UNREGISTERED(handler)    //LOG_ADD_EXCEPTION(HANDLER_ALREADY_UNREGISTERED, (LOG_DATA_TYPE)handler)

//! Debug macro called when there is not enough space to register a handler.
//! @param control = The control structure that ran out of space for registering handlers.
#define NO_SPACE_TO_REGISTER_HANDLER(control)   //LOG_ADD_EXCEPTION(NO_SPACE_TO_REGISTER_HANDLER, (LOG_DATA_TYPE)control)

//! Debug macro called when a attempt to register a NULL handler is made.
#define ATTEMPT_TO_REGISTER_NULL_HANDLER()  //LOG_ADD_EXCEPTION(ATTEMPT_TO_REGISTER_NULL_HANDLER, 0)

//! Debug macro called when a attempt to unregister a NULL handler is made.
#define ATTEMPT_TO_UNREGISTER_NULL_HANDLER()    //LOG_ADD_EXCEPTION(ATTEMPT_TO_UNREGISTER_NULL_HANDLER, 0)

//! Debug macro called when a NULL control structure is referenced.
#define CALLBACK_CONTROL_IS_NULL()  //LOG_ADD_EXCEPTION(CONTROL_IS_NULL, 0)

//! Debug macro called when a corrupted control structure is detected.
//! @param control = The control structure that is corrupted.
#define CALLBACK_REGISTRY_CORRUPTED(control)    //LOG_ADD_EXCEPTION(REGISTRY_CORRUPTED, (LOG_DATA_TYPE)control)

#endif  // CALLBACK_PRV_H_
