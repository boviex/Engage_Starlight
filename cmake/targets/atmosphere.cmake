# Target: Atmosphere

# Folder structure:
# /atmosphere
#   /contents/0100A6301214E000
#     /exefs
#       subsdk1
#     /romfs
#
#   /exefs_patches/${CMAKE_PROJECT_NAME}
#     *.ips

release_target(
        atmosphere
        "/atmosphere/exefs_patches/${CMAKE_PROJECT_NAME}/"
        /atmosphere/contents/0100A6301214E000/exefs/
        /atmosphere/contents/0100A6301214E000/romfs/
)
zip_target(atmosphere)
ftp_target(atmosphere)
