IF(MSVC) 

	ADD_DEFINITIONS(-D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE)
	ADD_DEFINITIONS(-D_CRT_SECURE_NO_WARNINGS)
	SET(CMAKE_MFC_FLAG 2) 

ELSE(MSVC)

	SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}  -Wall -O2 -fno-strict-aliasing")
	SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -Wall -O2 -fno-strict-aliasing")

ENDIF(MSVC) 

set(Command_SRCS
	stdafx.cpp
	stdafx.h
	AddRequirementCommand.cpp
	AddRequirementCommand.h
	CodeGroup.cpp
	CodeGroup.h
	Command.cpp
	DeletePageCommand.cpp
	DeletePageCommand.h
	ICommand.h
	IGroup.h
	Invoker.cpp
	Invoker.h
	PageGroup.cpp
	PageGroup.h
	RequirementGroup.cpp
	RequirementGroup.h
)

set(Command_SRCS_W
	targetver.h
	
)
set(Command_SRCS_U
#	XXX.cpp
)




include_directories(
	${PROJECT_SOURCE_DIR}/12Command
	)

	

IF(WIN32)
	ADD_EXECUTABLE(Command ${Command_SRCS} ${Command_SRCS_W})   
ELSE(WIN32)
	ADD_EXECUTABLE(Command ${Command_SRCS} ${Command_SRCS_U})   
ENDIF(WIN32)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
 
