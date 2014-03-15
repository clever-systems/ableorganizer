/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

  // To understand behaviors, see https://drupal.org/node/756722#behaviors
  Drupal.behaviors.ao_frontend_template = {
    attach: function(context, settings) {

    // handles display of meny navigation
    $('body', context).once('able-activate', function(){
      
      // track the position of the mouse
      var currentMousePos = { x: -1, y: -1 };
      
      $(document).mousemove(function(event) {
        var formatBubble = $('.aoFormatBubble'), w, h;
        currentMousePos.x = event.pageX;
        currentMousePos.y = event.pageY;
        
        if(formatBubble.length){
          // position the format bubble where the mouse is
          w = formatBubble.width();
          h = formatBubble.height();
          formatBubble.css('position', 'absolute');
          formatBubble.css('display', 'block');
          formatBubble.css('left', currentMousePos.x - w/2);
          formatBubble.css('top', currentMousePos.y - h - 50);
          console.log('moving bubble');
          console.log(currentMousePos.x + ' - ' + currentMousePos.y);
        }
        
      });

      // create buttons for each input filter
      $check = $('.text-format-wrapper').find('SELECT');
      if ($check.length > 0){
        // check each text filter
        for($i = 0; $i < $check.length; $i++){
          $items = $('#' + $($check[$i]).attr('id') + ' > option').map(function(){
            var text, value, itemClass = '', newItem;
            text = $(this).text();
            value = $(this).val();
            if ($(this).attr('selected')){
              itemClass = " active-val";
            }
            newItem = $(this).parent().before('<div class="ao-input-format-select' + itemClass + '" name="' + value + '">' + text + '</div>');
          });
        }
        
        // make the guidelines appear over each input format
        $('.ao-input-format-select').bind('mouseover', function(){
          var guides = $(this).parents('.fieldset-wrapper').find('.filter-guidelines-item'), guideClass = $(this).text().replace(/\s+/g, '_').toLowerCase(), formatBubble;

          // check the guides, see if there is one that matches
          guides.each(function(){
            if($(this).hasClass("filter-guidelines-" + guideClass)){
              $('BODY').append('<div class="aoFormatBubble"></div>');
              formatBubble = $('.aoFormatBubble');
              // fill out the content of the format bubble
              formatBubble.html($(this).html());
              formatBubble.find('h3').attr('style', '');
            }
          });
          
        });
        $('.ao-input-format-select').bind('mouseout', function(){
          var formatBubble = $('.aoFormatBubble');
          formatBubble.remove();
        });
        
        // changes the value of the select box, which should not be displaying
        $('.ao-input-format-select').click(function(){
          var select, value;
            // set the value of the select list based on what the person selected
            select = $(this).parent().find('SELECT');
            value = $(this).attr('name');
            select.val(value).change();
            // get all the other selects around this one and make them not selected
            $(this).parent().find('.text-format-select').removeClass('active-val');
            // then make this one selected
            $(this).addClass('active-val');
        });
      }
    });

  }
};


})(jQuery, Drupal, this, this.document);
