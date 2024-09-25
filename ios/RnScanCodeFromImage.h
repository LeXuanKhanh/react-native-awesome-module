
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNRnScanCodeFromImageSpec.h"

@interface RnScanCodeFromImage : NSObject <NativeRnScanCodeFromImageSpec>
#else
#import <React/RCTBridgeModule.h>

@interface RnScanCodeFromImage : NSObject <RCTBridgeModule>
#endif

@end
