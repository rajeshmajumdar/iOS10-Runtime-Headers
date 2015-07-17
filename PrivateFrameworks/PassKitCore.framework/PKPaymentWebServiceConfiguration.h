/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentWebServiceConfiguration : NSObject <NSSecureCoding> {
    NSDictionary * _configuration;
    NSURL * _configurationURL;
    NSObject<OS_dispatch_queue> * _queue;
    NSNumber * _version;
}

@property (copy) NSDictionary *configuration;
@property (copy) NSURL *configurationURL;
@property (readonly) NSNumber *version;

+ (BOOL)supportsSecureCoding;

- (id)_queue_current_region;
- (id)_queue_regions;
- (BOOL)_queue_supportedForOSVersion:(id)arg1 inRegion:(id)arg2 deviceClass:(id)arg3 platform:(id)arg4;
- (id)brokerURLForCurrentRegion;
- (id)brokerURLForRegion:(id)arg1;
- (BOOL)buddyManualProvisioningEnabledForCurrentRegion;
- (BOOL)buddyProvisioningEnabledForCurrentRegion;
- (BOOL)cameraFirstProvisioningEnabledForCurrentRegion;
- (id)configuration;
- (id)configurationURL;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 url:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)manualProvisioningEnabledForCurrentRegion;
- (id)paymentSetupFeaturedNetworksForCurrentRegion;
- (void)setConfiguration:(id)arg1;
- (void)setConfigurationURL:(id)arg1;
- (id)supportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2;
- (id)supportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2 platform:(id)arg3;
- (id)version;

@end
