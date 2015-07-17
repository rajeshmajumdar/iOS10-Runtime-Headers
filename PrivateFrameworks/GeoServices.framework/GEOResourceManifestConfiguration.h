/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceManifestConfiguration : NSObject {
    NSString * _applicationIdentifier;
    NSString * _applicationVersion;
    NSString * _countryCode;
    NSString * _dataDirectory;
    NSString * _environment;
    NSString * _hardwareIdentifier;
    NSString * _os;
    NSString * _osBuild;
    NSString * _osVersion;
    unsigned int  _tileGroupIdentifier;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, copy) NSString *applicationVersion;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *dataDirectory;
@property (nonatomic, readonly) NSString *directorySuffix;
@property (nonatomic, copy) NSString *environment;
@property (nonatomic, copy) NSString *hardwareIdentifier;
@property (nonatomic, copy) NSString *os;
@property (nonatomic, copy) NSString *osBuild;
@property (nonatomic, copy) NSString *osVersion;
@property (nonatomic) unsigned int tileGroupIdentifier;

+ (id)configurationWithPairedDevice:(id)arg1;
+ (id)defaultConfiguration;

- (id)applicationIdentifier;
- (id)applicationVersion;
- (id)conciseDictionaryRepresentation;
- (id)countryCode;
- (id)dataDirectory;
- (void)dealloc;
- (id)directorySuffix;
- (id)environment;
- (id)hardwareIdentifier;
- (unsigned int)hash;
- (id)init;
- (id)initWithConciseDictionaryRepresentation:(id)arg1;
- (BOOL)isDefaultConfiguration;
- (BOOL)isEqual:(id)arg1;
- (id)os;
- (id)osBuild;
- (id)osVersion;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setApplicationVersion:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDataDirectory:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setHardwareIdentifier:(id)arg1;
- (void)setOs:(id)arg1;
- (void)setOsBuild:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setTileGroupIdentifier:(unsigned int)arg1;
- (unsigned int)tileGroupIdentifier;

@end
