# Target: SimpleModManager

# Folder structure:
# /mods/Fire Emblem Engage/${CMAKE_PROJECT_NAME}
#   /contents/0100A6301214E000
#     /exefs
#       subsdk1
#     /romfs
#
#   /exefs_patches/${CMAKE_PROJECT_NAME}
#     *.ips

release_target(
        modmanager
        "/mods/Fire Emblem Engage/${CMAKE_PROJECT_NAME}/exefs_patches/${CMAKE_PROJECT_NAME}/"
        "/mods/Fire Emblem Engage/${CMAKE_PROJECT_NAME}/contents/0100A6301214E000/exefs/"
        "/mods/Fire Emblem Engage/${CMAKE_PROJECT_NAME}/contents/0100A6301214E000/romfs/"
)
zip_target(modmanager)
ftp_target(modmanager)
