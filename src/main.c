#include "hwinit/btn.h"
#include "hwinit/hwinit.h"
#include "hwinit/di.h"
#include "hwinit/mc.h"
#include "hwinit/t210.h"
#include "hwinit/timer.h"
#include "hwinit/util.h"
#include "hwinit/carveout.h"
#include "hwinit/fuse.h"
#include "lib/rcm_usb.h"

int main(void) {
    config_hw();

    usb_print("\n");
    usb_print("rcmDeviceID v%0.2f\n", 1.00);
    usb_print("*************************\n\n");

    usb_print("Device ID: NX%016llX-0\n\n", fuse_get_device_id());

    usb_print("Done.");

    while (btn_read() != BTN_POWER) { sleep(10000); }
    shutdown_using_pmic();

    return 0;
}
