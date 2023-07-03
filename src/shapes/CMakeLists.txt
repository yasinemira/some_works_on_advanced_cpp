add_library(shapes STATIC)

target_include_directories(shapes PUBLIC ${CMAKE_CURRENT_LIST_DIR})

file(GLOB shapes_SRC
     "*.h"
     "*.cpp"
)

target_sources(shapes
	PRIVATE
		${shapes_SRC}
)