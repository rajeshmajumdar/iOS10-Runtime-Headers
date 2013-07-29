/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableArray;

@interface GEOAttributionApp : PBCodable  {
    NSString *_appBundleIdentifier;
    NSMutableArray *_handledSchemes;
}

@property(retain) NSString * appBundleIdentifier;
@property(retain) NSMutableArray * handledSchemes;


- (id)handledSchemes;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)handledSchemesAtIndex:(unsigned int)arg1;
- (void)clearHandledSchemes;
- (unsigned int)handledSchemesCount;
- (id)appBundleIdentifier;
- (void)addHandledSchemes:(id)arg1;
- (void)setHandledSchemes:(id)arg1;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end