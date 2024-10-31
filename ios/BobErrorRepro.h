
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNBobErrorReproSpec.h"

@interface BobErrorRepro : NSObject <NativeBobErrorReproSpec>
#else
#import <React/RCTBridgeModule.h>

@interface BobErrorRepro : NSObject <RCTBridgeModule>
#endif

@end
