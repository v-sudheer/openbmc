HOMEPAGE = " https://github.com/AspeedTech-BMC/u-boot"
SECTION = "bootloaders"

LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://Licenses/README;md5=a2c678cfd4a4d97135585cad908541c6"
PE = "1"

# We use the revision in order to avoid having to fetch it from the
# repo during parse
SRCREV = "2a5c08f60b5bbad07e1c76c3cbe74d78b9bd569a"

UBRANCH = "pilot4_initial"
SRC_URI = "git://git@github.com/AspeedTech-BMC/u-boot.git;branch=${UBRANCH};protocol=https"

S = "${WORKDIR}/git"

PV = "v2016.07+git${SRCPV}"
