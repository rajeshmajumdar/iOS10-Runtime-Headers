/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMLocationEvent : HMEvent <NSSecureCoding, _HMLocationHandlerDelegate> {
    int  _locationAuthorization;
    CLRegion * _region;
}

@property (nonatomic) int locationAuthorization;
@property (nonatomic, retain) CLRegion *region;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_configure:(id)arg1 eventTrigger:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)_serializeForAdd;
- (void)_updateRegion:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)didUpdateAuthorization:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRegion:(id)arg1;
- (int)locationAuthorization;
- (id)region;
- (void)setLocationAuthorization:(int)arg1;
- (void)setRegion:(id)arg1;
- (void)updateRegion:(id)arg1 completionHandler:(id /* block */)arg2;

@end
