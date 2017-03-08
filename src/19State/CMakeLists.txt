IF(MSVC) 

	ADD_DEFINITIONS(-D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE)
	ADD_DEFINITIONS(-D_CRT_SECURE_NO_WARNINGS)
	SET(CMAKE_MFC_FLAG 2) 

ELSE(MSVC)

	SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}  -Wall -O2 -fno-strict-aliasing")
	SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -Wall -O2 -fno-strict-aliasing")

ENDIF(MSVC) 

set(State_SRCS
	stdafx.cpp
	stdafx.h
	CloseingState.cpp
	CloseingState.h
	Context.cpp
	Context.h
	ILift.h
	Lift.cpp
	Lift.h
	LiftState.cpp
	LiftState.h
	OpenningState.cpp
	OpenningState.h
	RunningState.cpp
	RunningState.h
	State.cpp
	StoppingState.cpp
	StoppingState.h
)

set(State_SRCS_W
	targetver.h
)
set(State_SRCS_U
#	XXX.cpp
)




include_directories(
	${PROJECT_SOURCE_DIR}/19State
	)

	

IF(WIN32)
	ADD_EXECUTABLE(State ${State_SRCS} ${State_SRCS_W})   
ELSE(WIN32)
	ADD_EXECUTABLE(State ${State_SRCS} ${State_SRCS_U})   
ENDIF(WIN32)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
 
