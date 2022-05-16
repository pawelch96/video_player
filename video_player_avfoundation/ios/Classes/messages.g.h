// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
// Autogenerated from Pigeon (v2.0.4), do not edit directly.
// See also: https://pub.dev/packages/pigeon
#import <Foundation/Foundation.h>
@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class FLTTextureMessage;
@class FLTLoopingMessage;
@class FLTVolumeMessage;
@class FLTPlaybackSpeedMessage;
@class FLTPositionMessage;
@class FLTCreateMessage;
@class FLTMixWithOthersMessage;
@class FLTPictureInPictureMessage;

@interface FLTTextureMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithTextureId:(NSNumber *)textureId;
@property(nonatomic, strong) NSNumber * textureId;
@end

@interface FLTLoopingMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithTextureId:(NSNumber *)textureId
    isLooping:(NSNumber *)isLooping;
@property(nonatomic, strong) NSNumber * textureId;
@property(nonatomic, strong) NSNumber * isLooping;
@end

@interface FLTVolumeMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithTextureId:(NSNumber *)textureId
    volume:(NSNumber *)volume;
@property(nonatomic, strong) NSNumber * textureId;
@property(nonatomic, strong) NSNumber * volume;
@end

@interface FLTPlaybackSpeedMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithTextureId:(NSNumber *)textureId
    speed:(NSNumber *)speed;
@property(nonatomic, strong) NSNumber * textureId;
@property(nonatomic, strong) NSNumber * speed;
@end

@interface FLTPositionMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithTextureId:(NSNumber *)textureId
    position:(NSNumber *)position;
@property(nonatomic, strong) NSNumber * textureId;
@property(nonatomic, strong) NSNumber * position;
@end

@interface FLTCreateMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithAsset:(nullable NSString *)asset
    uri:(nullable NSString *)uri
    packageName:(nullable NSString *)packageName
    formatHint:(nullable NSString *)formatHint
    httpHeaders:(NSDictionary<NSString *, NSString *> *)httpHeaders;
@property(nonatomic, copy, nullable) NSString * asset;
@property(nonatomic, copy, nullable) NSString * uri;
@property(nonatomic, copy, nullable) NSString * packageName;
@property(nonatomic, copy, nullable) NSString * formatHint;
@property(nonatomic, strong) NSDictionary<NSString *, NSString *> * httpHeaders;
@end

@interface FLTMixWithOthersMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithMixWithOthers:(NSNumber *)mixWithOthers;
@property(nonatomic, strong) NSNumber * mixWithOthers;
@end

@interface FLTPictureInPictureMessage : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithTextureId:(NSNumber *)textureId
    enabled:(NSNumber *)enabled
    left:(NSNumber *)left
    top:(NSNumber *)top
    width:(NSNumber *)width
    height:(NSNumber *)height;
@property(nonatomic, strong) NSNumber * textureId;
@property(nonatomic, strong) NSNumber * enabled;
@property(nonatomic, strong) NSNumber * left;
@property(nonatomic, strong) NSNumber * top;
@property(nonatomic, strong) NSNumber * width;
@property(nonatomic, strong) NSNumber * height;
@end

/// The codec used by FLTVideoPlayerApi.
NSObject<FlutterMessageCodec> *FLTVideoPlayerApiGetCodec(void);

@protocol FLTVideoPlayerApi
- (void)initialize:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable FLTTextureMessage *)create:(FLTCreateMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)dispose:(FLTTextureMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setLooping:(FLTLoopingMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setVolume:(FLTVolumeMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setPlaybackSpeed:(FLTPlaybackSpeedMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)play:(FLTTextureMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable FLTPositionMessage *)position:(FLTTextureMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)seekTo:(FLTPositionMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)pause:(FLTTextureMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setMixWithOthers:(FLTMixWithOthersMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
- (void)setPictureInPicture:(FLTPictureInPictureMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void FLTVideoPlayerApiSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FLTVideoPlayerApi> *_Nullable api);

NS_ASSUME_NONNULL_END
