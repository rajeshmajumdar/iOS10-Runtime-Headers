/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMColorProperty : CMProperty {
    OITSUColor * wdValue;
}

+ (struct CGColor { }*)copyCGColorFromOADColor:(id)arg1 state:(id)arg2;
+ (struct CGColor { }*)copyCGColorFromOADFill:(id)arg1 state:(id)arg2;
+ (id)cssStringFromOADColor:(id)arg1;
+ (id)cssStringFromOADGradientFill:(id)arg1 state:(id)arg2;
+ (id)cssStringFromRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)cssStringFromTSUColor:(id)arg1;
+ (id)nsColorFromOADColor:(id)arg1 state:(id)arg2;
+ (id)nsColorFromOADFill:(id)arg1 state:(id)arg2;
+ (id)nsColorFromShading:(id)arg1;
+ (float)resolveColorValueWithPercentage:(float)arg1 foregroundComponent:(float)arg2 backgroundComponent:(float)arg3;
+ (id)resolveStyleColorWithPercentage:(float)arg1 foregroundColor:(id)arg2 backgroundColor:(id)arg3;
+ (id)resolveStyleColorWithPercentage:(float)arg1 shading:(id)arg2;
+ (float)transformedAlphaFromOADColor:(id)arg1;

- (id)cssString;
- (id)cssStringForName:(id)arg1;
- (id)initWithColor:(id)arg1;
- (BOOL)isEqualTo:(id)arg1;
- (id)value;

@end
