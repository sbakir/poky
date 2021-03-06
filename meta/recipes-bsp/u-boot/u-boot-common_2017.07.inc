HOMEPAGE = "http://www.denx.de/wiki/U-Boot/WebHome"
SECTION = "bootloaders"

LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://Licenses/README;md5=a2c678cfd4a4d97135585cad908541c6"
PE = "1"

# We use the revision in order to avoid having to fetch it from the
# repo during parse
SRCREV = "d85ca029f257b53a96da6c2fb421e78a003a9943"

SRC_URI = "git://git.denx.de/u-boot.git \
    file://MPC8315ERDB-enable-DHCP.patch \
    file://10m50-update-device-tree.patch \
"

S = "${WORKDIR}/git"
