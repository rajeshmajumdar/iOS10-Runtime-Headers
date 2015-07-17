/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITextSelectionSettings : _UISettings {
    NSNumber * _allowExtendingSelections;
    float  _allowableForceMovement;
    float  _allowableSeparation;
    NSNumber * _enableDeepPress;
    float  _gain;
    float  _linear;
    float  _maxPinkWidth;
    float  _minPinkWidth;
    float  _parabolic;
    float  _pinkWidthFactor;
    NSNumber * _shouldPreferEndOfWord;
    NSNumber * _shouldUseAcceleration;
}

@property (nonatomic, retain) NSNumber *allowExtendingSelections;
@property (nonatomic) float allowableForceMovement;
@property (nonatomic) float allowableSeparation;
@property (nonatomic, retain) NSNumber *enableDeepPress;
@property (nonatomic) float gain;
@property (nonatomic) float linear;
@property (nonatomic) float maxPinkWidth;
@property (nonatomic) float minPinkWidth;
@property (nonatomic) float parabolic;
@property (nonatomic) float pinkWidthFactor;
@property (nonatomic, retain) NSNumber *shouldPreferEndOfWord;
@property (nonatomic, retain) NSNumber *shouldUseAcceleration;

+ (id)sharedInstance;

- (id)allowExtendingSelections;
- (float)allowableForceMovement;
- (float)allowableSeparation;
- (id)enableDeepPress;
- (float)gain;
- (float)linear;
- (float)maxPinkWidth;
- (float)minPinkWidth;
- (float)parabolic;
- (float)pinkWidthFactor;
- (void)setAllowExtendingSelections:(id)arg1;
- (void)setAllowableForceMovement:(float)arg1;
- (void)setAllowableSeparation:(float)arg1;
- (void)setDefaultValues;
- (void)setEnableDeepPress:(id)arg1;
- (void)setGain:(float)arg1;
- (void)setLinear:(float)arg1;
- (void)setMaxPinkWidth:(float)arg1;
- (void)setMinPinkWidth:(float)arg1;
- (void)setParabolic:(float)arg1;
- (void)setPinkWidthFactor:(float)arg1;
- (void)setShouldPreferEndOfWord:(id)arg1;
- (void)setShouldUseAcceleration:(id)arg1;
- (id)shouldPreferEndOfWord;
- (id)shouldUseAcceleration;

@end
