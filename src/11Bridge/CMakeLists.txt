IF(MSVC) 

	ADD_DEFINITIONS(-D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE)
	ADD_DEFINITIONS(-D_CRT_SECURE_NO_WARNINGS)
	SET(CMAKE_MFC_FLAG 2) 

ELSE(MSVC)

	SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}  -Wall -O2 -fno-strict-aliasing")
	SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -Wall -O2 -fno-strict-aliasing")

ENDIF(MSVC) 

set(Bridge_SRCS
	stdafx.cpp
	stdafx.h
	Bridge.cpp
	Clothes.cpp
	Clothes.h
	House.cpp
	House.h
IPod.cpp
IPod.h
IProduct.h
NewCorp.cpp
NewCorp.h
NewHouseCorp.cpp
NewHouseCorp.h
ShanZhaiCorp.cpp
ShanZhaiCorp.h
	
	

)

set(Bridge_SRCS_W
	targetver.h
	
)
set(Bridge_SRCS_U
#	XXX.cpp
)




include_directories(
	${PROJECT_SOURCE_DIR}/11Bridge
	)

	

IF(WIN32)
	ADD_EXECUTABLE(Bridge ${Bridge_SRCS} ${Bridge_SRCS_W})   
ELSE(WIN32)
	ADD_EXECUTABLE(Bridge ${Bridge_SRCS} ${Bridge_SRCS_U})   
ENDIF(WIN32)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
 
