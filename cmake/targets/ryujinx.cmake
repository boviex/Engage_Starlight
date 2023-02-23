# Target: Ryujinx

# Folder structure:
# /mods/contents/0100A6301214E000/${CMAKE_PROJECT_NAME}
#   /exefs
#     subsdk1
#     *.ips
#   /romfs
#

release_target(
        ryujinx
        "/mods/contents/0100A6301214E000/${CMAKE_PROJECT_NAME}/exefs/"
        "/mods/contents/0100A6301214E000/${CMAKE_PROJECT_NAME}/exefs/"
        "/mods/contents/0100A6301214E000/${CMAKE_PROJECT_NAME}/romfs/"
)
zip_target(ryujinx)
