/**
 *  @file       MciSetWm.h
 *
 *  @brief      Header file for Indesit Wm Mci Setting Algorithms module
 *
 *  $Header: $
 *
 *  @copyright  Copyright 2016-$Date$. Whirlpool Corporation. All rights reserved - CONFIDENTIAL
 */
//---------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------
#ifndef MCISETWMFLOAT_H_
    #define MCISETWMFLOAT_H_


//-------------------------------------- Include Files ----------------------------------------------------------------
#include "C_Extensions.h"
#include "MciSetWmFloat_prm.h"

//=====================================================================================================================
//-------------------------------------- PUBLIC (Extern Variables, Constants & Defines) -------------------------------
//=====================================================================================================================


//=====================================================================================================================
//-------------------------------------- PUBLIC (Function Prototypes) -------------------------------------------------
//=====================================================================================================================

void MciSetWmFloat__Initialize(void);
BOOL_TYPE MciSetWmFloat__IsParamsReady(void);
void MciSetWmFloat__5msHandler(void);



#endif /* MCISETWMFLOAT_H_ */



