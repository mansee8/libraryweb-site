(function($) {
  Drupal.behaviors.ucla_tab_search = {
    attach: function (context, settings) {
      // display the current tab based on #hash from URL
      var hash = window.location.hash.substr(1);
      if (settings.ucla_tab_search.ids.indexOf(hash) >= 0) {
        $('.vertical-tabs .vertical-tab-button.selected').removeClass('selected');
        $('.vertical-tabs .vertical-tab-button:nth-child('+ settings.ucla_tab_search.ids.indexOf(hash) +')').addClass('selected');
        $('.vertical-tabs-panes .vertical-tabs-pane').hide();
        $('.vertical-tabs-panes .vertical-tabs-pane#edit-'+ hash).show();
      }
      // set the URL #hash based on the clicking of tabs
      $('.vertical-tab-button').mousedown(function () {
        $(this).mouseup(function () {
          window.location.hash = '#'+ Drupal.settings.ucla_tab_search.ids[$(this).index()+1];
        });
      });
    }
  };
})(jQuery);