/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRVehicle : NSObject <NSSecureCoding> {
    NSSet * _accessoryProtocols;
    NSString * _bluetoothAddress;
    NSString * _carplayWiFiUUID;
    NSData * _certificateSerialNumber;
    NSUUID * _identifier;
    unsigned int  _pairingStatus;
    NSString * _vehicleName;
}

@property (nonatomic, retain) NSSet *accessoryProtocols;
@property (nonatomic, retain) NSString *bluetoothAddress;
@property (nonatomic, retain) NSString *carplayWiFiUUID;
@property (nonatomic, retain) NSData *certificateSerialNumber;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, readonly) BOOL isPaired;
@property (nonatomic) unsigned int pairingStatus;
@property (nonatomic, retain) NSString *vehicleName;

+ (BOOL)supportsSecureCoding;
+ (id)vehicleForVehicleAccessory:(id)arg1;

- (void).cxx_destruct;
- (id)_pairingDebugDescription;
- (id)accessoryProtocols;
- (id)bluetoothAddress;
- (id)carplayWiFiUUID;
- (id)certificateSerialNumber;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 certificateSerial:(id)arg2;
- (BOOL)isPaired;
- (void)mergeAttributesFromVehicle:(id)arg1;
- (unsigned int)pairingStatus;
- (void)setAccessoryProtocols:(id)arg1;
- (void)setBluetoothAddress:(id)arg1;
- (void)setCarplayWiFiUUID:(id)arg1;
- (void)setCertificateSerialNumber:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPairingStatus:(unsigned int)arg1;
- (void)setVehicleName:(id)arg1;
- (id)vehicleName;

@end
