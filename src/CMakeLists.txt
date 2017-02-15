PROJECT(DesignPattern)

cmake_minimum_required(VERSION 2.6)

add_subdirectory(1Strategy)
add_subdirectory(2Agent)


IF(WIN32)
#	add_subdirectory(XXX)
ENDIF(WIN32)

# install
#INSTALL(FILES COPYRIGHT  AUTHORS README DESTINATION share/docs/)
#INSTALL(PROGRAMS runhello.sh DESTINATION bin)
#INSTALL(DIRECTORY docs/ DESTINATION share/docs/)
