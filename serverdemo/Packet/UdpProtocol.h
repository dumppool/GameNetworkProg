#pragma once

typedef enum UDP_PROTOCOL
{
	PU_VERSION	= 0x2000000,
	PU_C2S_TUNNELING,
	/*
	DWORD_PTR	:	SESSION_ID
	WCHAR		:	REMOTE_ADDRESS[32]
	USHORT		:	REMOTE_PORT
	*/
	PU_S2C_TUNNELING_SUCC_U,
	/*
	*/
	PU_S2C_TUNNELING_FAIL_U,
	/*
	DWORD		:	ERROR_CODE
	*/
	PU_C2C_REQ_PING,
	/*
	DWORD		:	TICK_COUNT
	*/
	PU_C2C_REQ_PING_RESULT,
	/*
	DWORD		:	TICK_COUNT
	*/

	// MOVE_TYPE -> 0:NORMAL | 1:DASH | 2:BACK_DASH
	// DIRECTION -> �ð�������� 0 ~ 7
	PU_C2C_GAME_PC_MOVE_BEGIN,
	/*
	DWORD		:	SLOT_POSITION
	BYTE		:	MOVE_TYPE
	BYTE		:	DIRECTION
	FLOAT		:	BEGIN_X
	FLOAT		:	BEGIN_Y
	FLOAT		:	BEGIN_Z
	*/
	PU_C2C_GAME_PC_MOVE_END,
	/*
	DWORD		:	SLOT_POSITION
	BYTE		:	MOVE_TYPE
	BYTE		:	DIRECTION
	FLOAT		:	END_X
	FLOAT		:	END_Y
	FLOAT		:	END_Z
	*/
	// �����̴� ���� ����ȭ Ȯ�� PACKET
	PU_C2C_GAME_PC_MOVE_SYNC,
	/*
	DWORD		:	SLOT_POSITION
	BYTE		:	MOVE_TYPE
	BYTE		:	DIRECTION
	FLOAT		:	SYNC_X
	FLOAT		:	SYNC_Y
	FLOAT		:	SYNC_Z
	*/
	// �ƿ��Ǿ�����
	PU_C2C_GAME_PC_OUT,
	/*
	DWORD		:	SLOT_POSITION
	FLOAT		:	POS_X
	FLOAT		:	POS_Y
	FLOAT		:	POS_Z
	*/
	// ACTION_TYPE -> 0:SHOOT|1:PASS|2:JUMP|3:FIELDGET|4:FIELD
	PU_C2C_GAME_PC_ACTION,
	/*
	USHORT		:	ACTION_TYPE
	DWORD		:	ACTION_PARAM
	DWORD		:	ACTION_SLOT_POSITION
	DWORD		:	TARGET_SLOT_POSITION
	FLOAT		:	ACTION_X
	FLOAT		:	ACTION_Y
	FLOAT		:	ACTION_Z
	FLOAT		:	TARGET_X
	FLOAT		:	TARGET_Y
	FLOAT		:	TARGET_Z
	*/

	// �� �̵��� ��Ű�� ��ü�� �׻� ������
	PU_C2C_GAME_BALL_MOVE,
	/*
	DWORD		:	SLOT_POSITION
	FLOAT		:	BEGIN_X
	FLOAT		:	BEGIN_Y
	FLOAT		:	BEGIN_Z
	FLOAT		:	END_X
	FLOAT		:	END_Y
	FLOAT		:	END_Z
	FLOAT		:	VECTOR_X
	FLOAT		:	VECTOR_Y
	FLOAT		:	VECTOR_Z
	*/

	// PROPERTY -> 0:SHOOT|1:PASS|2:THROWPASS
	PU_C2C_GAME_BALL_PROPERTY,
	/*
	DWORD		:	SLOT_POSITION
	USHORT		:	PROPERTY
	FLOAT		:	BEGIN_X
	FLOAT		:	BEGIN_Y
	FLOAT		:	BEGIN_Z
	FLOAT		:	END_X
	FLOAT		:	END_Y
	FLOAT		:	END_Z
	FLOAT		:	VECTOR_X
	FLOAT		:	VECTOR_Y
	FLOAT		:	VECTOR_Z
	*/

	PU_C2C_GAME_SPECIAL_SHOOT_READY,
	/*
	DWORD		:	SLOT_POSITION
	DWORD		:	TARGET_SLOT_POSITION
	FLOAT		:	POSITION_X
	FLOAT		:	POSITION_Y
	FLOAT		:	POSITION_Z
	FLOAT		:	TARGET_POSITION_X
	FLOAT		:	TARGET_POSITION_Y
	FLOAT		:	TARGET_POSITION_Z
	USHORT		:	SHOOT_TYPE
	*/

	PU_C2C_GAME_SPECIAL_SHOOT_ACTION,
	/*
	DWORD		:	SLOT_POSITION
	DWORD		:	TARGET_SLOT_POSITION
	FLOAT		:	POSITION_X
	FLOAT		:	POSITION_Y
	FLOAT		:	POSITION_Z
	FLOAT		:	TARGET_POSITION_X
	FLOAT		:	TARGET_POSITION_Y
	FLOAT		:	TARGET_POSITION_Z
	USHORT		:	SHOOT_TYPE
	*/

	PU_C2C_GAME_SETUP_TARGET,
	/*
	DWORD		:	SLOT_POSITION
	DWORD		:	TARGET_SLOT_POSITION
	*/

	PU_C2C_GAME_SKILL_ACTION,
	/*
	DWORD		:	SLOT_POSITION
	DWORD		:	TARGET_SLOT_POSITION
	FLOAT		:	POSITION_X
	FLOAT		:	POSITION_Y
	FLOAT		:	POSITION_Z
	USHORT		:	SKILL_TYPE
	DWORD		:   PARAM
	*/

	PU_C2C_GAME_HIT_INFO,
	/*
	DWORD		:	SLOT_POSITION
	FLOAT		:	POSITION_X
	FLOAT		:	POSITION_Y
	FLOAT		:	POSITION_Z
	FLOAT		:	HIT_X
	FLOAT		:	HIT_Y
	FLOAT		:	HIT_Z
	FLOAT		:	REFLECT_VELOCITY_X
	FLOAT		:	REFLECT_VELOCITY_Y
	FLOAT		:	REFLECT_VELOCITY_Z
	*/

	PU_END
};