#import <UIKit/UIKit.h>

#import "GTLDefines.h"
#import "GTLBatchQuery.h"
#import "GTLBatchResult.h"
#import "GTLDateTime.h"
#import "GTLErrorObject.h"
#import "GTLObject.h"
#import "GTLQuery.h"
#import "GTLRuntimeCommon.h"
#import "GTLService.h"
#import "GTLUploadParameters.h"
#import "GTLBase64.h"
#import "GTLFramework.h"
#import "GTLJSONParser.h"
#import "GTLTargetNamespace.h"
#import "GTLUtilities.h"
#import "GTLGmail.h"
#import "GTLGmailConstants.h"
#import "GTLGmailDraft.h"
#import "GTLGmailHistory.h"
#import "GTLGmailHistoryLabelAdded.h"
#import "GTLGmailHistoryLabelRemoved.h"
#import "GTLGmailHistoryMessageAdded.h"
#import "GTLGmailHistoryMessageDeleted.h"
#import "GTLGmailLabel.h"
#import "GTLGmailListDraftsResponse.h"
#import "GTLGmailListHistoryResponse.h"
#import "GTLGmailListLabelsResponse.h"
#import "GTLGmailListMessagesResponse.h"
#import "GTLGmailListThreadsResponse.h"
#import "GTLGmailMessage.h"
#import "GTLGmailMessagePart.h"
#import "GTLGmailMessagePartBody.h"
#import "GTLGmailMessagePartHeader.h"
#import "GTLGmailProfile.h"
#import "GTLGmailThread.h"
#import "GTLGmailWatchResponse.h"
#import "GTLQueryGmail.h"
#import "GTLServiceGmail.h"
#import "GTLQueryYouTube.h"
#import "GTLServiceYouTube.h"
#import "GTLYouTube.h"
#import "GTLYouTubeAccessPolicy.h"
#import "GTLYouTubeActivity.h"
#import "GTLYouTubeActivityContentDetails.h"
#import "GTLYouTubeActivityContentDetailsBulletin.h"
#import "GTLYouTubeActivityContentDetailsChannelItem.h"
#import "GTLYouTubeActivityContentDetailsComment.h"
#import "GTLYouTubeActivityContentDetailsFavorite.h"
#import "GTLYouTubeActivityContentDetailsLike.h"
#import "GTLYouTubeActivityContentDetailsPlaylistItem.h"
#import "GTLYouTubeActivityContentDetailsPromotedItem.h"
#import "GTLYouTubeActivityContentDetailsRecommendation.h"
#import "GTLYouTubeActivityContentDetailsSocial.h"
#import "GTLYouTubeActivityContentDetailsSubscription.h"
#import "GTLYouTubeActivityContentDetailsUpload.h"
#import "GTLYouTubeActivityListResponse.h"
#import "GTLYouTubeActivitySnippet.h"
#import "GTLYouTubeCaption.h"
#import "GTLYouTubeCaptionListResponse.h"
#import "GTLYouTubeCaptionSnippet.h"
#import "GTLYouTubeCdnSettings.h"
#import "GTLYouTubeChannel.h"
#import "GTLYouTubeChannelAuditDetails.h"
#import "GTLYouTubeChannelBannerResource.h"
#import "GTLYouTubeChannelBrandingSettings.h"
#import "GTLYouTubeChannelContentDetails.h"
#import "GTLYouTubeChannelContentOwnerDetails.h"
#import "GTLYouTubeChannelConversionPing.h"
#import "GTLYouTubeChannelConversionPings.h"
#import "GTLYouTubeChannelListResponse.h"
#import "GTLYouTubeChannelLocalization.h"
#import "GTLYouTubeChannelProfileDetails.h"
#import "GTLYouTubeChannelSection.h"
#import "GTLYouTubeChannelSectionContentDetails.h"
#import "GTLYouTubeChannelSectionListResponse.h"
#import "GTLYouTubeChannelSectionLocalization.h"
#import "GTLYouTubeChannelSectionSnippet.h"
#import "GTLYouTubeChannelSectionTargeting.h"
#import "GTLYouTubeChannelSettings.h"
#import "GTLYouTubeChannelSnippet.h"
#import "GTLYouTubeChannelStatistics.h"
#import "GTLYouTubeChannelStatus.h"
#import "GTLYouTubeChannelTopicDetails.h"
#import "GTLYouTubeComment.h"
#import "GTLYouTubeCommentListResponse.h"
#import "GTLYouTubeCommentSnippet.h"
#import "GTLYouTubeCommentThread.h"
#import "GTLYouTubeCommentThreadListResponse.h"
#import "GTLYouTubeCommentThreadReplies.h"
#import "GTLYouTubeCommentThreadSnippet.h"
#import "GTLYouTubeConstants.h"
#import "GTLYouTubeContentRating.h"
#import "GTLYouTubeFanFundingEvent.h"
#import "GTLYouTubeFanFundingEventListResponse.h"
#import "GTLYouTubeFanFundingEventSnippet.h"
#import "GTLYouTubeGeoPoint.h"
#import "GTLYouTubeGuideCategory.h"
#import "GTLYouTubeGuideCategoryListResponse.h"
#import "GTLYouTubeGuideCategorySnippet.h"
#import "GTLYouTubeI18nLanguage.h"
#import "GTLYouTubeI18nLanguageListResponse.h"
#import "GTLYouTubeI18nLanguageSnippet.h"
#import "GTLYouTubeI18nRegion.h"
#import "GTLYouTubeI18nRegionListResponse.h"
#import "GTLYouTubeI18nRegionSnippet.h"
#import "GTLYouTubeImageSettings.h"
#import "GTLYouTubeIngestionInfo.h"
#import "GTLYouTubeInvideoBranding.h"
#import "GTLYouTubeInvideoPosition.h"
#import "GTLYouTubeInvideoPromotion.h"
#import "GTLYouTubeInvideoTiming.h"
#import "GTLYouTubeLanguageTag.h"
#import "GTLYouTubeLiveBroadcast.h"
#import "GTLYouTubeLiveBroadcastContentDetails.h"
#import "GTLYouTubeLiveBroadcastListResponse.h"
#import "GTLYouTubeLiveBroadcastSnippet.h"
#import "GTLYouTubeLiveBroadcastStatistics.h"
#import "GTLYouTubeLiveBroadcastStatus.h"
#import "GTLYouTubeLiveBroadcastTopic.h"
#import "GTLYouTubeLiveBroadcastTopicDetails.h"
#import "GTLYouTubeLiveBroadcastTopicSnippet.h"
#import "GTLYouTubeLiveChatBan.h"
#import "GTLYouTubeLiveChatBanSnippet.h"
#import "GTLYouTubeLiveChatFanFundingEventDetails.h"
#import "GTLYouTubeLiveChatMessage.h"
#import "GTLYouTubeLiveChatMessageAuthorDetails.h"
#import "GTLYouTubeLiveChatMessageDeletedDetails.h"
#import "GTLYouTubeLiveChatMessageListResponse.h"
#import "GTLYouTubeLiveChatMessageRetractedDetails.h"
#import "GTLYouTubeLiveChatMessageSnippet.h"
#import "GTLYouTubeLiveChatModerator.h"
#import "GTLYouTubeLiveChatModeratorListResponse.h"
#import "GTLYouTubeLiveChatModeratorSnippet.h"
#import "GTLYouTubeLiveChatTextMessageDetails.h"
#import "GTLYouTubeLiveChatUserBannedMessageDetails.h"
#import "GTLYouTubeLiveStream.h"
#import "GTLYouTubeLiveStreamConfigurationIssue.h"
#import "GTLYouTubeLiveStreamContentDetails.h"
#import "GTLYouTubeLiveStreamHealthStatus.h"
#import "GTLYouTubeLiveStreamListResponse.h"
#import "GTLYouTubeLiveStreamSnippet.h"
#import "GTLYouTubeLiveStreamStatus.h"
#import "GTLYouTubeLocalizedProperty.h"
#import "GTLYouTubeLocalizedString.h"
#import "GTLYouTubeMonitorStreamInfo.h"
#import "GTLYouTubePageInfo.h"
#import "GTLYouTubePlaylist.h"
#import "GTLYouTubePlaylistContentDetails.h"
#import "GTLYouTubePlaylistItem.h"
#import "GTLYouTubePlaylistItemContentDetails.h"
#import "GTLYouTubePlaylistItemListResponse.h"
#import "GTLYouTubePlaylistItemSnippet.h"
#import "GTLYouTubePlaylistItemStatus.h"
#import "GTLYouTubePlaylistListResponse.h"
#import "GTLYouTubePlaylistLocalization.h"
#import "GTLYouTubePlaylistPlayer.h"
#import "GTLYouTubePlaylistSnippet.h"
#import "GTLYouTubePlaylistStatus.h"
#import "GTLYouTubePromotedItem.h"
#import "GTLYouTubePromotedItemId.h"
#import "GTLYouTubePropertyValue.h"
#import "GTLYouTubeResourceId.h"
#import "GTLYouTubeSearchListResponse.h"
#import "GTLYouTubeSearchResult.h"
#import "GTLYouTubeSearchResultSnippet.h"
#import "GTLYouTubeSponsor.h"
#import "GTLYouTubeSponsorListResponse.h"
#import "GTLYouTubeSponsorSnippet.h"
#import "GTLYouTubeSubscription.h"
#import "GTLYouTubeSubscriptionContentDetails.h"
#import "GTLYouTubeSubscriptionListResponse.h"
#import "GTLYouTubeSubscriptionSnippet.h"
#import "GTLYouTubeSubscriptionSubscriberSnippet.h"
#import "GTLYouTubeThumbnail.h"
#import "GTLYouTubeThumbnailDetails.h"
#import "GTLYouTubeThumbnailSetResponse.h"
#import "GTLYouTubeTokenPagination.h"
#import "GTLYouTubeVideo.h"
#import "GTLYouTubeVideoAbuseReport.h"
#import "GTLYouTubeVideoAbuseReportReason.h"
#import "GTLYouTubeVideoAbuseReportReasonListResponse.h"
#import "GTLYouTubeVideoAbuseReportReasonSnippet.h"
#import "GTLYouTubeVideoAbuseReportSecondaryReason.h"
#import "GTLYouTubeVideoAgeGating.h"
#import "GTLYouTubeVideoCategory.h"
#import "GTLYouTubeVideoCategoryListResponse.h"
#import "GTLYouTubeVideoCategorySnippet.h"
#import "GTLYouTubeVideoContentDetails.h"
#import "GTLYouTubeVideoContentDetailsRegionRestriction.h"
#import "GTLYouTubeVideoFileDetails.h"
#import "GTLYouTubeVideoFileDetailsAudioStream.h"
#import "GTLYouTubeVideoFileDetailsVideoStream.h"
#import "GTLYouTubeVideoGetRatingResponse.h"
#import "GTLYouTubeVideoListResponse.h"
#import "GTLYouTubeVideoLiveStreamingDetails.h"
#import "GTLYouTubeVideoLocalization.h"
#import "GTLYouTubeVideoMonetizationDetails.h"
#import "GTLYouTubeVideoPlayer.h"
#import "GTLYouTubeVideoProcessingDetails.h"
#import "GTLYouTubeVideoProcessingDetailsProcessingProgress.h"
#import "GTLYouTubeVideoProjectDetails.h"
#import "GTLYouTubeVideoRating.h"
#import "GTLYouTubeVideoRecordingDetails.h"
#import "GTLYouTubeVideoSnippet.h"
#import "GTLYouTubeVideoStatistics.h"
#import "GTLYouTubeVideoStatus.h"
#import "GTLYouTubeVideoSuggestions.h"
#import "GTLYouTubeVideoSuggestionsTagSuggestion.h"
#import "GTLYouTubeVideoTopicDetails.h"
#import "GTLYouTubeWatchSettings.h"

FOUNDATION_EXPORT double GoogleAPIClientVersionNumber;
FOUNDATION_EXPORT const unsigned char GoogleAPIClientVersionString[];

