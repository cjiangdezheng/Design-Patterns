IF(MSVC) 

	ADD_DEFINITIONS(-D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE)
	ADD_DEFINITIONS(-D_CRT_SECURE_NO_WARNINGS)
	SET(CMAKE_MFC_FLAG 2) 

ELSE(MSVC)

	SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}  -Wall -O2 -fno-strict-aliasing")
	SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -Wall -O2 -fno-strict-aliasing")

ENDIF(MSVC) 

set(Observer_SRCS
	stdafx.cpp
	stdafx.h
	HanFeiziObservable.cpp
	HanFeiziObservable.h
	IObservable.h
	IObserver.h
	LiSiObserver.cpp
	LiSiObserver.h
	Observer.cpp
	ZhouSiObserver.cpp
	ZhouSiObserver.h


)

set(Observer_SRCS_W
	targetver.h
	
)
set(Observer_SRCS_U
#	XXX.cpp
)




include_directories(
	${PROJECT_SOURCE_DIR}/16Observer
	)

	

IF(WIN32)
	ADD_EXECUTABLE(Observer ${Observer_SRCS} ${Observer_SRCS_W})   
ELSE(WIN32)
	ADD_EXECUTABLE(Observer ${Observer_SRCS} ${Observer_SRCS_U})   
ENDIF(WIN32)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
 
