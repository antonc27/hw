
file(GLOB fpcrtl_src *.c)

add_library(fpcrtl STATIC ${fpcrtl_src})

if(APPLE)
	target_compile_options(fpcrtl PRIVATE -Wno-implicit-function-declaration)
endif()
