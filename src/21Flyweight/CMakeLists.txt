IF(MSVC) 

	ADD_DEFINITIONS(-D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE)
	ADD_DEFINITIONS(-D_CRT_SECURE_NO_WARNINGS)
	SET(CMAKE_MFC_FLAG 2) 

ELSE(MSVC)

	SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}  -Wall -O2 -fno-strict-aliasing")
	SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -Wall -O2 -fno-strict-aliasing")

ENDIF(MSVC) 

set(Flyweight_SRCS
	stdafx.cpp
	stdafx.h
	Flyweight.cpp
)

set(Flyweight_SRCS_W
	targetver.h
	
)
set(Flyweight_SRCS_U
#	XXX.cpp
)




include_directories(
	${PROJECT_SOURCE_DIR}/21Flyweight
	)

	

IF(WIN32)
	ADD_EXECUTABLE(Flyweight ${Flyweight_SRCS} ${Flyweight_SRCS_W})   
ELSE(WIN32)
	ADD_EXECUTABLE(Flyweight ${Flyweight_SRCS} ${Flyweight_SRCS_U})   
ENDIF(WIN32)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
 
