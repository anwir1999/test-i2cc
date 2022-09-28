# See the build system documentation in IDF programming guide
# for more information about component CMakeLists.txt files.

idf_component_register(SRCS "main.c"
							"sensor.c"
                    INCLUDE_DIRS "."
                     # Embed the server root certificate into the final binary
)