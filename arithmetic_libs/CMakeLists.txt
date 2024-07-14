project(Operations)

set(HEADER_FILES
    Operations.h
)

set(SOURCE_FILES
    Operations.cpp
)

add_library(Operations_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})