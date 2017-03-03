PROJECT(DesignPattern)

cmake_minimum_required(VERSION 2.6)

add_subdirectory(1Strategy)
add_subdirectory(2Agent)
add_subdirectory(3Single)
#add_subdirectory(4Multi)
add_subdirectory(5Factory)
add_subdirectory(6Facade)
add_subdirectory(7AbstractFactory)
add_subdirectory(8Adapter)
add_subdirectory(9Template)
add_subdirectory(10Builder)
add_subdirectory(11Bridge)
add_subdirectory(12Command)
add_subdirectory(13Decorator)
add_subdirectory(14Iterator)
#add_subdirectory(15XXX)
add_subdirectory(16Observer)
add_subdirectory(17ChainOfResponsibility)


IF(WIN32)

ENDIF(WIN32)

# install
#INSTALL(FILES COPYRIGHT  AUTHORS README DESTINATION share/docs/)
#INSTALL(PROGRAMS runhello.sh DESTINATION bin)
#INSTALL(DIRECTORY docs/ DESTINATION share/docs/)

