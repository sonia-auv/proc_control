catkin_add_gtest( config_test config_test.cc ${proc_control_FILES})

target_link_libraries(config_test pthread ${catkin_LIBRARIES} ${lib_atlas_LIBRARIES} yaml-cpp)