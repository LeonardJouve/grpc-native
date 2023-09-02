
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNGrpcNativeSpec.h"

@interface GrpcNative : NSObject <NativeGrpcNativeSpec>
#else
#import <React/RCTBridgeModule.h>

@interface GrpcNative : NSObject <RCTBridgeModule>
#endif

@end
