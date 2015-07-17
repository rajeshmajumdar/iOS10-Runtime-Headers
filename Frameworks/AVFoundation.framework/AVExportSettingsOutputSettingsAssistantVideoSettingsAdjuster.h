/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster : NSObject <AVOutputSettingsAssistantVideoSettingsAdjuster> {
    NSDictionary * _exportSettings;
    NSString * _outputSettingsPresetIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (int)averageBitRateForSourceDimensions:(struct CGSize { float x1; float x2; })arg1 andTargetFrameRate:(float)arg2;
- (void)dealloc;
- (id)initWithOutputSettingsPreset:(id)arg1;

@end
