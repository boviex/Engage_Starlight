# Target: Yuzu

# Folder structure:
# /load/0100A6301214E000/${CMAKE_PROJECT_NAME}
#   /exefs
#     subsdk1
#     *.ips
#   /romfs
#

release_target(
        yuzu
        "/load/0100A6301214E000/${CMAKE_PROJECT_NAME}/exefs/"
        "/load/0100A6301214E000/${CMAKE_PROJECT_NAME}/exefs/"
        "/load/0100A6301214E000/${CMAKE_PROJECT_NAME}/romfs/"
)
zip_target(yuzu)
