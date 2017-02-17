PROJECT(DesignPattern)

cmake_minimum_required(VERSION 2.6)

add_subdirectory(1Strategy)
add_subdirectory(2Agent)
add_subdirectory(3Single)
#add_subdirectory(4Multi)
add_subdirectory(5Factory)


IF(WIN32)

ENDIF(WIN32)

# install
#INSTALL(FILES COPYRIGHT  AUTHORS README DESTINATION share/docs/)
#INSTALL(PROGRAMS runhello.sh DESTINATION bin)
#INSTALL(DIRECTORY docs/ DESTINATION share/docs/)

