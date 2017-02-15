IF(MSVC) 

	ADD_DEFINITIONS(-D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE)
	ADD_DEFINITIONS(-D_CRT_SECURE_NO_WARNINGS)
	SET(CMAKE_MFC_FLAG 2) 

ELSE(MSVC)

	SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}  -Wall -O2 -fno-strict-aliasing")
	SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -Wall -O2 -fno-strict-aliasing")

ENDIF(MSVC) 

set(Agent_SRCS
	stdafx.cpp
	stdafx.h
	IKindWomen.h
	JiaShi.h
	JiaShi.cpp
	PanJinLian.h
	PanJinLian.cpp
	WangPo.h
	WangPo.cpp
	Agent.cpp
)

set(Agent_SRCS_W
	targetver.h
	
)
set(Agent_SRCS_U
#	XXX.cpp
)




include_directories(
	${PROJECT_SOURCE_DIR}/Agent
	)

	

IF(WIN32)
	ADD_EXECUTABLE(Agent ${Agent_SRCS} ${Agent_SRCS_W})   
ELSE(WIN32)
	ADD_EXECUTABLE(Agent ${Agent_SRCS} ${Agent_SRCS_U})   
ENDIF(WIN32)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
 
