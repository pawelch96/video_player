// Autogenerated from Pigeon (v3.0.0), do not edit directly.
// See also: https://pub.dev/packages/pigeon
#import <Foundation/Foundation.h>
@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class TextureMessage;
@class LoopingMessage;
@class VolumeMessage;
@class PlaybackSpeedMessage;
@class PositionMessage;
@class CreateMessage;
@class MixWithOthersMessage;
@class PictureInPictureMessage;

@interface TextureMessage : NSObject
+ (instancetype)makeWithTextureId:(nullable NSNumber *)textureId;
@property(nonatomic, strong, nullable) NSNumber * textureId;
@end

@interface LoopingMessage : NSObject
+ (instancetype)makeWithTextureId:(nullable NSNumber *)textureId
    isLooping:(nullable NSNumber *)isLooping;
@property(nonatomic, strong, nullable) NSNumber * textureId;
@property(nonatomic, strong, nullable) NSNumber * isLooping;
@end

@interface VolumeMessage : NSObject
+ (instancetype)makeWithTextureId:(nullable NSNumber *)textureId
    volume:(nullable NSNumber *)volume;
@property(nonatomic, strong, nullable) NSNumber * textureId;
@property(nonatomic, strong, nullable) NSNumber * volume;
@end

@interface PlaybackSpeedMessage : NSObject
+ (instancetype)makeWithTextureId:(nullable NSNumber *)textureId
    speed:(nullable NSNumber *)speed;
@property(nonatomic, strong, nullable) NSNumber * textureId;
@property(nonatomic, strong, nullable) NSNumber * speed;
@end

@interface PositionMessage : NSObject
+ (instancetype)makeWithTextureId:(nullable NSNumber *)textureId
    position:(nullable NSNumber *)position;
@property(nonatomic, strong, nullable) NSNumber * textureId;
@property(nonatomic, strong, nullable) NSNumber * position;
@end

@interface CreateMessage : NSObject
+ (instancetype)makeWithAsset:(nullable NSString *)asset
    uri:(nullable NSString *)uri
    packageName:(nullable NSString *)packageName
    formatHint:(nullable NSString *)formatHint
    httpHeaders:(nullable NSDictionary<NSString *, NSString *> *)httpHeaders;
@property(nonatomic, copy, nullable) NSString * asset;
@property(nonatomic, copy, nullable) NSString * uri;
@property(nonatomic, copy, nullable) NSString * packageName;
@property(nonatomic, copy, nullable) NSString * formatHint;
@property(nonatomic, strong, nullable) NSDictionary<NSString *, NSString *> * httpHeaders;
@end

@interface MixWithOthersMessage : NSObject
+ (instancetype)makeWithMixWithOthers:(nullable NSNumber *)mixWithOthers;
@property(nonatomic, strong, nullable) NSNumber * mixWithOthers;
@end

@interface PictureInPictureMessage : NSObject
+ (instancetype)makeWithTextureId:(nullable NSNumber *)textureId
    enabled:(nullable NSNumber *)enabled
    left:(nullable NSNumber *)left
    top:(nullable NSNumber *)top
    width:(nullable NSNumber *)width
    height:(nullable NSNumber *)height;
@property(nonatomic, strong, nullable) NSNumber * textureId;
@property(nonatomic, strong, nullable) NSNumber * enabled;
@property(nonatomic, strong, nullable) NSNumber * left;
@property(nonatomic, strong, nullable) NSNumber * top;
@property(nonatomic, strong, nullable) NSNumber * width;
@property(nonatomic, strong, nullable) NSNumber * height;
@end

/// The codec used by VideoPlayerApi.
NSObject<FlutterMessageCodec> *VideoPlayerApiGetCodec(void);

@protocol VideoPlayerApi
- (void)initializeWithError:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable TextureMessage *)createMsg:(CreateMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)disposeMsg:(TextureMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setLoopingMsg:(LoopingMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setVolumeMsg:(VolumeMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setPlaybackSpeedMsg:(PlaybackSpeedMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)playMsg:(TextureMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable PositionMessage *)positionMsg:(TextureMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)seekToMsg:(PositionMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)pauseMsg:(TextureMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setMixWithOthersMsg:(MixWithOthersMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setPictureInPictureMsg:(PictureInPictureMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void VideoPlayerApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<VideoPlayerApi> *_Nullable api);

NS_ASSUME_NONNULL_END
