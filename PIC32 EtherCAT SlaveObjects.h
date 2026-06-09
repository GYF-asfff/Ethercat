/**
* \addtogroup PIC32EtherCATSlave PIC32 EtherCAT Slave
* @{
*/

/**
\file PIC32 EtherCAT SlaveObjects
\author ET9300Utilities.ApplicationHandler (Version 1.3.6.0) | EthercatSSC@beckhoff.com

\brief PIC32 EtherCAT Slave specific objects<br>
\brief NOTE : This file will be overwritten if a new object dictionary is generated!<br>
*/

#if defined(_PIC32_ETHER_CAT_SLAVE_) && (_PIC32_ETHER_CAT_SLAVE_ == 1)
#define PROTO
#else
#define PROTO extern
#endif
/******************************************************************************
*                    Object 0x1600 : RXPDO 1
******************************************************************************/
/**
* \addtogroup 0x1600 0x1600 | RXPDO 1
* @{
* \brief Object 0x1600 (RXPDO 1) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - ControlCode<br>
* SubIndex 2 - x<br>
* SubIndex 3 - y<br>
* SubIndex 4 - z<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1600[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex1 - ControlCode */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex2 - x */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex3 - y */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }}; /* Subindex4 - z */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1600[] = "RXPDO 1\000"
"ControlCode\000"
"x\000"
"y\000"
"z\000\377";
#endif //#ifdef _OBJD_

#ifndef _PIC32_ETHER_CAT_SLAVE_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 -  */
UINT32 SI2; /* Subindex2 -  */
UINT32 SI3; /* Subindex3 -  */
UINT32 SI4; /* Subindex4 -  */
} OBJ_STRUCT_PACKED_END
TOBJ1600;
#endif //#ifndef _PIC32_ETHER_CAT_SLAVE_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1600 RXPDO10x1600
#if defined(_PIC32_ETHER_CAT_SLAVE_) && (_PIC32_ETHER_CAT_SLAVE_ == 1)
={4,0x70000120,0x70000220,0x70000320,0x70000420}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1A00 : TXPDO 1
******************************************************************************/
/**
* \addtogroup 0x1A00 0x1A00 | TXPDO 1
* @{
* \brief Object 0x1A00 (TXPDO 1) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Fx<br>
* SubIndex 2 - Fy<br>
* SubIndex 3 - Fz<br>
* SubIndex 4 - Mx<br>
* SubIndex 5 - My<br>
* SubIndex 6 - Mz<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1A00[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex1 - Fx */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex2 - Fy */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex3 - Fz */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex4 - Mx */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex5 - My */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }}; /* Subindex6 - Mz */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1A00[] = "TXPDO 1\000"
"Fx\000"
"Fy\000"
"Fz\000"
"Mx\000"
"My\000"
"Mz\000\377";
#endif //#ifdef _OBJD_

#ifndef _PIC32_ETHER_CAT_SLAVE_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 -  */
UINT32 SI2; /* Subindex2 -  */
UINT32 SI3; /* Subindex3 -  */
UINT32 SI4; /* Subindex4 -  */
UINT32 SI5; /* Subindex5 -  */
UINT32 SI6; /* Subindex6 -  */
} OBJ_STRUCT_PACKED_END
TOBJ1A00;
#endif //#ifndef _PIC32_ETHER_CAT_SLAVE_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1A00 TXPDO10x1A00
#if defined(_PIC32_ETHER_CAT_SLAVE_) && (_PIC32_ETHER_CAT_SLAVE_ == 1)
={6,0x60000120,0x60000220,0x60000320,0x60000420,0x60000520,0x60000620}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1C12 : RxPDO assign
******************************************************************************/
/**
* \addtogroup 0x1C12 0x1C12 | RxPDO assign
* @{
* \brief Object 0x1C12 (RxPDO assign) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1C12[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ | ACCESS_WRITE_PREOP },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | ACCESS_WRITE_PREOP }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x1C12[] = "RxPDO assign\000\377";
#endif //#ifdef _OBJD_

#ifndef _PIC32_ETHER_CAT_SLAVE_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT16 aEntries[1];  /**< \brief Subindex 1 - 1 */
} OBJ_STRUCT_PACKED_END
TOBJ1C12;
#endif //#ifndef _PIC32_ETHER_CAT_SLAVE_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1C12 sRxPDOassign
#if defined(_PIC32_ETHER_CAT_SLAVE_) && (_PIC32_ETHER_CAT_SLAVE_ == 1)
={1,{0x1600}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1C13 : TxPDO assign
******************************************************************************/
/**
* \addtogroup 0x1C13 0x1C13 | TxPDO assign
* @{
* \brief Object 0x1C13 (TxPDO assign) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1C13[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ | ACCESS_WRITE_PREOP },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | ACCESS_WRITE_PREOP }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x1C13[] = "TxPDO assign\000\377";
#endif //#ifdef _OBJD_

#ifndef _PIC32_ETHER_CAT_SLAVE_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT16 aEntries[1];  /**< \brief Subindex 1 - 1 */
} OBJ_STRUCT_PACKED_END
TOBJ1C13;
#endif //#ifndef _PIC32_ETHER_CAT_SLAVE_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1C13 sTxPDOassign
#if defined(_PIC32_ETHER_CAT_SLAVE_) && (_PIC32_ETHER_CAT_SLAVE_ == 1)
={1,{0x1A00}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x2021 : param2021
******************************************************************************/
/**
* \addtogroup 0x2021 0x2021 | param2021
* @{
* \brief Object 0x2021 (param2021) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Matrix01<br>
* SubIndex 2 - Matrix02<br>
* SubIndex 3 - Matrix03<br>
* SubIndex 4 - Matrix04<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x2021[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }, /* Subindex1 - Matrix01 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }, /* Subindex2 - Matrix02 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }, /* Subindex3 - Matrix03 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }}; /* Subindex4 - Matrix04 */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x2021[] = "param2021\000"
"Matrix01\000"
"Matrix02\000"
"Matrix03\000"
"Matrix04\000\377";
#endif //#ifdef _OBJD_

#ifndef _PIC32_ETHER_CAT_SLAVE_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 Matrix01; /* Subindex1 - Matrix01 */
UINT32 Matrix02; /* Subindex2 - Matrix02 */
UINT32 Matrix03; /* Subindex3 - Matrix03 */
UINT32 Matrix04; /* Subindex4 - Matrix04 */
} OBJ_STRUCT_PACKED_END
TOBJ2021;
#endif //#ifndef _PIC32_ETHER_CAT_SLAVE_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ2021 Param20210x2021
#if defined(_PIC32_ETHER_CAT_SLAVE_) && (_PIC32_ETHER_CAT_SLAVE_ == 1)
={4,0x00000000,0x00000000,0x00000000,0x00000000}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x6000 : MR_RpParams
******************************************************************************/
/**
* \addtogroup 0x6000 0x6000 | MR_RpParams
* @{
* \brief Object 0x6000 (MR_RpParams) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Fx<br>
* SubIndex 2 - Fy<br>
* SubIndex 3 - Fz<br>
* SubIndex 4 - Mx<br>
* SubIndex 5 - My<br>
* SubIndex 6 - Mz<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x6000[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex1 - Fx */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex2 - Fy */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex3 - Fz */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex4 - Mx */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }, /* Subindex5 - My */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_TXPDOMAPPING }}; /* Subindex6 - Mz */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x6000[] = "MR_RpParams\000"
"Fx\000"
"Fy\000"
"Fz\000"
"Mx\000"
"My\000"
"Mz\000\377";
#endif //#ifdef _OBJD_

#ifndef _PIC32_ETHER_CAT_SLAVE_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 Fx; /* Subindex1 - Fx */
UINT32 Fy; /* Subindex2 - Fy */
UINT32 Fz; /* Subindex3 - Fz */
UINT32 Mx; /* Subindex4 - Mx */
UINT32 My; /* Subindex5 - My */
UINT32 Mz; /* Subindex6 - Mz */
} OBJ_STRUCT_PACKED_END
TOBJ6000;
#endif //#ifndef _PIC32_ETHER_CAT_SLAVE_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ6000 MR_RpParams0x6000
#if defined(_PIC32_ETHER_CAT_SLAVE_) && (_PIC32_ETHER_CAT_SLAVE_ == 1)
={6,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x7000 : CTRL_Params
******************************************************************************/
/**
* \addtogroup 0x7000 0x7000 | CTRL_Params
* @{
* \brief Object 0x7000 (CTRL_Params) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - ControlCode<br>
* SubIndex 2 - x<br>
* SubIndex 3 - y<br>
* SubIndex 4 - z<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x7000[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex1 - ControlCode */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex2 - x */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }, /* Subindex3 - y */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING }}; /* Subindex4 - z */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x7000[] = "CTRL_Params\000"
"ControlCode\000"
"x\000"
"y\000"
"z\000\377";
#endif //#ifdef _OBJD_

#ifndef _PIC32_ETHER_CAT_SLAVE_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 ControlCode; /* Subindex1 - ControlCode */
UINT32 X; /* Subindex2 - x */
UINT32 Y; /* Subindex3 - y */
UINT32 Z; /* Subindex4 - z */
} OBJ_STRUCT_PACKED_END
TOBJ7000;
#endif //#ifndef _PIC32_ETHER_CAT_SLAVE_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ7000 CTRL_Params0x7000
#if defined(_PIC32_ETHER_CAT_SLAVE_) && (_PIC32_ETHER_CAT_SLAVE_ == 1)
={4,0x00000000,0x00000000,0x00000000,0x00000000}
#endif
;
/** @}*/





PROTO UINT8 param2021_Read(UINT16 index, UINT8 subindex, UINT32 dataSize, UINT16 MBXMEM * pData, UINT8 bCompleteAccess);
PROTO UINT8 param2021_Write(UINT16 index, UINT8 subindex, UINT32 dataSize, UINT16 MBXMEM * pData, UINT8 bCompleteAccess);


#ifdef _OBJD_
TOBJECT    OBJMEM ApplicationObjDic[] = {
/* Object 0x1600 */
{NULL , NULL ,  0x1600 , {DEFTYPE_PDOMAPPING , 4 | (OBJCODE_REC << 8)} , asEntryDesc0x1600 , aName0x1600 , &RXPDO10x1600, NULL , NULL , 0x0000 },
/* Object 0x1A00 */
{NULL , NULL ,  0x1A00 , {DEFTYPE_PDOMAPPING , 6 | (OBJCODE_REC << 8)} , asEntryDesc0x1A00 , aName0x1A00 , &TXPDO10x1A00, NULL , NULL , 0x0000 },
/* Object 0x1C12 */
{NULL , NULL ,  0x1C12 , {DEFTYPE_UNSIGNED16 , 1 | (OBJCODE_ARR << 8)} , asEntryDesc0x1C12 , aName0x1C12 , &sRxPDOassign, NULL , NULL , 0x0000 },
/* Object 0x1C13 */
{NULL , NULL ,  0x1C13 , {DEFTYPE_UNSIGNED16 , 1 | (OBJCODE_ARR << 8)} , asEntryDesc0x1C13 , aName0x1C13 , &sTxPDOassign, NULL , NULL , 0x0000 },
/* Object 0x2021 */
{NULL , NULL ,  0x2021 , {DEFTYPE_RECORD , 4 | (OBJCODE_REC << 8)} , asEntryDesc0x2021 , aName0x2021 , &Param20210x2021, param2021_Read , param2021_Write , 0x0000 },
/* Object 0x6000 */
{NULL , NULL ,  0x6000 , {DEFTYPE_RECORD , 6 | (OBJCODE_REC << 8)} , asEntryDesc0x6000 , aName0x6000 , &MR_RpParams0x6000, NULL , NULL , 0x0000 },
/* Object 0x7000 */
{NULL , NULL ,  0x7000 , {DEFTYPE_RECORD , 4 | (OBJCODE_REC << 8)} , asEntryDesc0x7000 , aName0x7000 , &CTRL_Params0x7000, NULL , NULL , 0x0000 },
{NULL,NULL, 0xFFFF, {0, 0}, NULL, NULL, NULL, NULL}};
#endif    //#ifdef _OBJD_
#undef PROTO

/** @}*/
#define _PIC32_ETHER_CAT_SLAVE_OBJECTS_H_
