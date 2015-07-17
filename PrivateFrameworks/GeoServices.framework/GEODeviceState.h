/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODeviceState : PBCodable <NSCopying> {
    GEOCarInfo * _carInfo;
    int  _deviceBatteryState;
    int  _deviceConnectivity;
    NSString * _deviceInputLocale;
    int  _deviceInterfaceOrientation;
    NSString * _deviceLocale;
    NSString * _deviceOutputLocale;
    struct { 
        unsigned int deviceBatteryState : 1; 
        unsigned int deviceConnectivity : 1; 
        unsigned int deviceInterfaceOrientation : 1; 
    }  _has;
}

@property (nonatomic, retain) GEOCarInfo *carInfo;
@property (nonatomic) int deviceBatteryState;
@property (nonatomic) int deviceConnectivity;
@property (nonatomic, retain) NSString *deviceInputLocale;
@property (nonatomic) int deviceInterfaceOrientation;
@property (nonatomic, retain) NSString *deviceLocale;
@property (nonatomic, retain) NSString *deviceOutputLocale;
@property (nonatomic, readonly) BOOL hasCarInfo;
@property (nonatomic) BOOL hasDeviceBatteryState;
@property (nonatomic) BOOL hasDeviceConnectivity;
@property (nonatomic, readonly) BOOL hasDeviceInputLocale;
@property (nonatomic) BOOL hasDeviceInterfaceOrientation;
@property (nonatomic, readonly) BOOL hasDeviceLocale;
@property (nonatomic, readonly) BOOL hasDeviceOutputLocale;

- (id)carInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (int)deviceBatteryState;
- (int)deviceConnectivity;
- (id)deviceInputLocale;
- (int)deviceInterfaceOrientation;
- (id)deviceLocale;
- (id)deviceOutputLocale;
- (id)dictionaryRepresentation;
- (BOOL)hasCarInfo;
- (BOOL)hasDeviceBatteryState;
- (BOOL)hasDeviceConnectivity;
- (BOOL)hasDeviceInputLocale;
- (BOOL)hasDeviceInterfaceOrientation;
- (BOOL)hasDeviceLocale;
- (BOOL)hasDeviceOutputLocale;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCarInfo:(id)arg1;
- (void)setDeviceBatteryState:(int)arg1;
- (void)setDeviceConnectivity:(int)arg1;
- (void)setDeviceInputLocale:(id)arg1;
- (void)setDeviceInterfaceOrientation:(int)arg1;
- (void)setDeviceLocale:(id)arg1;
- (void)setDeviceOutputLocale:(id)arg1;
- (void)setHasDeviceBatteryState:(BOOL)arg1;
- (void)setHasDeviceConnectivity:(BOOL)arg1;
- (void)setHasDeviceInterfaceOrientation:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
