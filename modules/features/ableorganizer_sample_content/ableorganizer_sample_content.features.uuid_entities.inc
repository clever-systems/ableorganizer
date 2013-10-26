<?php
/**
 * @file
 * ableorganizer_sample_content.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function ableorganizer_sample_content_uuid_default_entities() {
  $entities = array();

  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/0288a5d9-e20c-43a5-b52f-fbd2b7767fb7',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>Using contacts, reports and dashboards in CRM Core</p>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'field_image' => array(),
    'field_tags' => array(),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'field_image' => array(
        'predicates' => array(
          0 => 'og:image',
          1 => 'rdfs:seeAlso',
        ),
        'type' => 'rel',
      ),
      'field_tags' => array(
        'predicates' => array(
          0 => 'dc:subject',
        ),
        'type' => 'rel',
      ),
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'Using contacts, reports and dashboards in CRM Core',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/contacts_reports_dashboards',
        'language' => 'und',
      ),
    ),
    'uuid' => '0288a5d9-e20c-43a5-b52f-fbd2b7767fb7',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/0e6a3702-77b3-4011-9ddf-4af3b3e408bc',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => '<p>Accepting online payments through CRM Core</p>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'field_image' => array(),
    'field_tags' => array(),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'field_image' => array(
        'predicates' => array(
          0 => 'og:image',
          1 => 'rdfs:seeAlso',
        ),
        'type' => 'rel',
      ),
      'field_tags' => array(
        'predicates' => array(
          0 => 'dc:subject',
        ),
        'type' => 'rel',
      ),
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'Accepting online payments through CRM Core',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/accepting_online_payments',
        'language' => 'und',
      ),
    ),
    'uuid' => '0e6a3702-77b3-4011-9ddf-4af3b3e408bc',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/36f0da4b-d510-4d0c-8ffb-959e43c481e5',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => '<p>Forms are created separately from other content.</p>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'field_image' => array(),
    'field_tags' => array(),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'field_image' => array(
        'predicates' => array(
          0 => 'og:image',
          1 => 'rdfs:seeAlso',
        ),
        'type' => 'rel',
      ),
      'field_tags' => array(
        'predicates' => array(
          0 => 'dc:subject',
        ),
        'type' => 'rel',
      ),
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'How forms and content work together in CRM Core',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/forms-and-content',
        'language' => 'und',
      ),
    ),
    'uuid' => '36f0da4b-d510-4d0c-8ffb-959e43c481e5',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/eb8ffe66-31a7-42cf-91b4-8e1f0facec7e',
      'cause' => 'node/3752f8c4-bd5c-405c-a913-e17a50db5577',
    ),
    'alt' => '',
    'file_contents' => '',
    'filemime' => 'video/youtube',
    'filename' => 'CRM Core Donation - Creating Online Donation Pages',
    'filesize' => 0,
    'metadata' => array(),
    'rdf_mapping' => array(),
    'status' => 1,
    'title' => '',
    'type' => 'video',
    'uid' => 1,
    'uri' => 'youtube://v/R1IRZh0A7Xk',
    'url_alias' => array(),
    'uuid' => 'eb8ffe66-31a7-42cf-91b4-8e1f0facec7e',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/3752f8c4-bd5c-405c-a913-e17a50db5577',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>CRM Core features used in AbleOrganizer.</p><p>[[{"fid":"eb8ffe66-31a7-42cf-91b4-8e1f0facec7e","view_mode":"default","fields":{"format":"default"},"type":"media","attributes":{"class":"media-element file-default"}}]]</p>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'field_image' => array(),
    'field_tags' => array(),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'field_image' => array(
        'predicates' => array(
          0 => 'og:image',
          1 => 'rdfs:seeAlso',
        ),
        'type' => 'rel',
      ),
      'field_tags' => array(
        'predicates' => array(
          0 => 'dc:subject',
        ),
        'type' => 'rel',
      ),
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'CRM Core features used in AbleOrganizer',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/crm_core_features',
        'language' => 'und',
      ),
    ),
    'uuid' => '3752f8c4-bd5c-405c-a913-e17a50db5577',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/71df67cd-f3f8-47c6-9887-963fb20a69d1',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>Using CRM Core\'s form builder</p>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'field_image' => array(),
    'field_tags' => array(),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'field_image' => array(
        'predicates' => array(
          0 => 'og:image',
          1 => 'rdfs:seeAlso',
        ),
        'type' => 'rel',
      ),
      'field_tags' => array(
        'predicates' => array(
          0 => 'dc:subject',
        ),
        'type' => 'rel',
      ),
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'Using CRM Core\'s form builder',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/crm-core-form-builder',
        'language' => 'und',
      ),
    ),
    'uuid' => '71df67cd-f3f8-47c6-9887-963fb20a69d1',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'file',
      'uri' => 'file/0d7682ef-d1a9-4c9d-903f-2effde89476c',
      'cause' => 'node/806f88f9-b8ba-4e4a-a893-3f48371915e2',
    ),
    'alt' => 'Trellon, LLC logo',
    'field_file_image_alt_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Trellon, LLC logo',
        ),
      ),
    ),
    'field_file_image_title_text' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Trellon, LLC logo',
        ),
      ),
    ),
    'file_contents' => '/9j/4AAQSkZJRgABAgAAZABkAAD/7AARRHVja3kAAQAEAAAAPAAA/+4ADkFkb2JlAGTAAAAAAf/bAIQABgQEBAUEBgUFBgkGBQYJCwgGBggLDAoKCwoKDBAMDAwMDAwQDA4PEA8ODBMTFBQTExwbGxscHx8fHx8fHx8fHwEHBwcNDA0YEBAYGhURFRofHx8fHx8fHx8fHx8fHx8fHx8fHx8fHx8fHx8fHx8fHx8fHx8fHx8fHx8fHx8fHx8f/8AAEQgAVQCdAwERAAIRAQMRAf/EAKgAAAEEAwEAAAAAAAAAAAAAAAABAgMEBQYHCAEAAQUBAQAAAAAAAAAAAAAAAAECAwQFBgcQAAIBAwIDBgMFBAoDAQAAAAECAwARBBIFITEGQVFhIhMHcTIUgaFCFQiRwVIjsdHhYnIzUySUFvCyRBgRAAEDAgQDBQYFBAIDAAAAAAEAAgMRBCExEgVBEwZRYXGxIvCBkaHBMtFCYiMU4VKiM/FywiQV/9oADAMBAAIRAxEAPwDlVW1QRQhFCEUIUsUDPxPBaoXN+2PAYuXUbN0xLdjmPOiP5nw/FJLLgQnTLIA3dfj91U23Ny/Fow8F0Eu0bRbHTK6ru9xr/ilj+knB9GQMRzsb0fzZo/vCUdObddA/x30I7DX4g4p4xQPmanP3U/laoIOiGjGWT4D8Ughhbgr3PxBpBuUgzapHdH2rxSOU6vcUxoJAbAX8RV2O/jcKk0XOXnS95E/S1usHIt+vYkMMgF9NPbeRE01KtN09ext1GM07sUyrSxiEUJEUIRQhFCEUIRQhFCEUIRQhFCFJHA78eQ76o3F+yPDMrpdq6YnuwHn0R9p4+AUqwRararsOJFZ79ykIwFAuqt+kLNrqOc57hwqPJOmKlTEJBE7DynhcfAGqLK11EVXTXGnRymvEbiMMqjwCxybIqHUW9QntPOteLcWUxFFwF50fcg1jcJK9uBV0JjYUDPYKo4s3aazZJHzvXYWtrBtlsScKD1O4k+2QVGDd5pHZpIv9ueAA5gfvq87bfT6T6lzMHWVZSJWfsu7Mx49qsR7VhiUTKCFPmCcQBVV16/TpOfatuHpu15wnbUMOIbkK+fuSnd8QZIgBLdhkHyg00WUhZqUr+pbVs4hrXhq/KCmZGbmY+TpMayQnipFwbVNBaNlZUGjgqO57/PY3GmRrXROxBGBp+IT53QhJk+STgfA1csJXAmN2YWB1PZxPay7h+yTPx7fxTa01xiKEIoQihCKEIoQihCKEIoQpIE1vx5Diap30/LZhmV0PTe2C6uRqHoZifoFLkxzyJoik9K/zNa5t4VgRPa01cKr1G+t5pGaIn8vtNMad3YmYWAmLrIYyO/zO3PhUlxcmSmFAFV2nZ22eo6i9z8yVXy9qbJyTMzjTYBV7rVZtbxkbdJCxt86dnu5ua14yoAa+amwcOTHZtUjMtrKpNxTL2aN9NAVjp3bbu3Lue40/KK1HiocrPwnmfFnQsi2u/MA/2UQW0oaHszTdy3qydK62nFWjjwr54dqsY2NAAGjIaL8NuNSTX7yzQRR3FV9u6XtxOJ2v5kObR3/Wiq5W7OuWIcdQ6of5p7/AUW9hrZU4E5JN26q5E4jjAc1p9ff3DwQcbGsZ4lGh/mX+E1ctZiDy3/dw71z+97dHJH/Ltv8AU77h/aVIbtAUPF4vMh717RTXs5MwcPtdmp7ef/6Fg6F2M0I1N72j28k02bEltyW0i/Zzp9w3TMxw44KvtcvN2+eF35BrH1RG2pAe8VoLlU6hIihCKEIoQihCKEIoQlRSzBR21HNKGNLjwVyws3XMzYm5uPsVdRFQWFcxNM6R1SvZ7Db4rWMRxig+Z7ysNNm7jNPIkTCNEYqLDjw8TWvb2MekE41Xn+7dTXXOcxh0NaSMM8FksFZVxlErF343Y1m3rA2QgLsenZ3y2bXvJc41xPisVFJuEjO6TsBqNgeI5+NbDbOMtFQvPZuoLxkrtMjqaj5rK+s8OF6sx1Oq3bsuaxXRAy6W5VXo8N66OxE0uLgzUVVgzcXLZVkgKSPwBtf7xVx0MsA1NPpXPxblYbm4Ryx0kdl/yPqrWQs0WKVxFHqD5QfvNU2OD5KyHArobiGS2tdFq0FzRgD595VSN4pH/nRiDJPM8lY1px64cR64/JcVci3vzpkH8e778Gu8ez2zTrNC5NuB4SJ3irMsbZ26mnHgVk2d1Nts5jlb6Dg9pyI7R9ClBCOpBuvNT3r2img86MtP3DzUrmjb7xksZ1Quxae1pzHiMkxRpXIi7ArW+BFxTXO1sYeOoKaKMQXFzGPtMT6eGY+SMf8Aylq+FyxUlKkRQhFCEUIRQhFCEUIU2KPOfhWZuh/bA712XRUYN04nMM+oUcOQzbnPGT5FUBR4jif6aznw0gDu9dZbbgXbnJCTgGCnuxPmmRYkyzzHTZWYlSfGtCC+jbGATiuU3Hpq6mupCxvoLqgk9quxIVTSedZd1KJJC4Lt9lsX21s2J9NQrkquPt7xKQXBub8q0W7o0ClFyUnRUrnE8xuJ7Cn7hjS5GOIoyBcjVfuFULaZrJNTl1G87fLPa8mIgZZ9gS4mL6I8wFwLC1Wb28bI0Nb71kdOdPyWkrpJqVpRtMfFY5482bNeY64bcE7OAq3bRxFmmoK53eLq9F0ZgHx8BnkPkpTkORoy4/UX/UXmKU2jozWM07uCVu/xXLdF4zV+tuDgpFNkuG9aAcmHzJ8R3VG15DsBof2cHK1NC18NHO59uMnj/ZH/ANhnp7Qi3DSDcN5kI5X/ALasF2PMGYwcPbsWUyIhptZCC13qidw1d3c7IjgU0niW/ijKn4jhRpxp+oFAlqNZ+7kuYfFuHlRLCLRirq54p9CRFCEUIRQhFCEUIRQhS4wb1Ljl21m7m5vLoc6rsOjI5DdFzR6A2jj5IycrDw21PwkkN7AXY9l6yoopJRQZBdtfX1pYu1vFJH9gxP8ARRblk5kYjONp0vwLEXN+YqaygZISHZhUOpN0uLWNj4aaHcaV8FJtrZJiYZDanvcHwNF/AI3DSMEdK7nJdRv5jtTmu+RWPhiyXy2vM9lkPlueQNaAjZydVB9q5E3dwNw5Ze+nNpmctSn3SXIOXFFDIU8tzY95qrt8DXNJcKrc6s3KaGZjYnFvprh3lPzcmfEw4kV9WQ5A1Hj4k1FBA2WU4ekK9ue5y2VlH6qzupififwUKZ25qPMiOPharrttZwqFzkfWN0PuDHe5O/Mr8JsY/FTQLSRn2vSyb/aT/wC63bXtaaH6JBJhs2uJ2gk8Rwp5EpFHtDgq7HWTXa7eWSF/6hUfEfWqdqFuJXj2ryPj4GlYCDx9+f8AUJtw9jmmpb2+g+mvaBmx3+J7khNwfGp2sWZNc1B7T7H40UiCygVYWWnUIRQhFCEUIRQhFCEUIU6v6eK8g4lQW/ZWBfVdPp8F6l02Ww7YZBn63H3V/BVWCZ2LHkFf5sfzL/TUkP7Euk/a5UtxA3SwEzP9seY8x9QpowJscw/iUXQ/DlS3LTDKJBkU3Z5huNg61ef3GDD/AMT7skYcnmseBIsR4ip9xbqjDhwWf0hMYbt0LsC4U97fYqJV0bjIv8RDD7aSB1bY+BRuMPL3hv6ntPxTXX1N4I/hVR++o7d2i3J8Va3SD+Ru7Y+A0/AYqLKb6jcrfghGkfHtqxt8WmOvasrqq9510Wj7Y/T+KzfTfTu59Rb1jbNtaLJnZWsQo7BFPpo0jXY8B5UNXyaLmAKmi3n/APOvuaf/AI8f/kR/103mBScpyaf04+5R54WN/wAiP+uk1hHKcuebtss+1bplbblBRlYcrQzqjBlDobGzDgeNPCYahVwiilSJ6rqYKOZNh9tCRdW6l9h32PE2SVt7E829ZmPhRwfTFNByBdmv6ratHdYXqMSKYxUWB90/bJOgcjb8d91G4y56yOFEHo6BGQP9SS970rX1TXs0rRqeo0UIRQhFCEUIUkLqbwv8r8B9vZWTuMBqJG8F3XSW5M0utZMn/b78woI1kxHta4HMfxLUpa25iw+5UY5JtmvCDjG7/Jvb4hSMAhWeE3Q8R4d4qOJ3MaYpPuCuX0H8SZt/a+qF2dOFcx4H5FEhCus6fI54+DCktiS10L807d2tZLHuMGLHEau4/wBcj3oybDMglHJxb9hvUVmfQ9hVzqFg/k29w37XFvmCPNNQhM7LmPKNR/RSEVhYwfmKkjcGbjcTnKJnzoFWwVJVpG+ZySa2WNoKLzqaQvcXHMlZTa923Pac6LcNsyXxM6HV6ORGbOutSjWPirEU4hRg0XfP03dR9Zb9ue9zb9u+RuONjwxLBHM2pVd2Ykgd9lqF4orMTqqjteT7gdce6nVm1bf1bmbPte1Sv6KwAOo0OIwoUle0E0mQRiStZ3r2U3XB23N3fctwlzN33HPONsuEFH1GW8kpX1pbny6hd7DkOZp7XqN0azC+wvTOz4uP/wBx6sg2vPyQCmMpjUAnsDSEFrHttajmdiXlDiVhusfZbP6W3XZ8jHy13LZtxy4YI8lV0sryMNIcAsCGHIg0ofVNdHRdk9xVGR1/7d7UnyrnZGY6/wB3GxyVP7TUQVh2YXOPffYt56v929p6d2iL1smHADvc2SNZJGLO57FFhTmGgUcgqaKZf0+9I4UkO3711fFBvEwGnGX0kux5BVkbWadzD2JvJHatM609nt46X6j2zbZZxk4G7TrBh56KR5mYAq6X4MAb8+NOD6pjoyCtu3f9NqbdkwSS9QRY+0KrPn7hkqsQjsQEVAX8xbjzItTRInmHvSb9+nfC/wCsy7z0vvf5qYo2mWOyMkyoLsI3jNtXDhQJMcUGHDBcQ1C178O+pVAhlDCxpCKpQSDUIXJAHp5PL8Mvd8azJLV8TtcXwXaWm9QXkX8e9z/K/s8fbHilKyQEulpIW+YDkR30hcy4/TIErIrjayajnWj86Yin0PyKRWjVSynVjPwcdqmmP1OIrhK3/JWIBFC12k8ywmwd2xnvRLf6cqeLwMHU9699I1w5ocMn4HxT543CydC7F9s4Oaf7mVwI9yjyzpjntzmkA+wAGnWzaub+lv1UG8zcuKcjOaVo9zWg/VOhXTGorXXDFPoSL0h+l7EEXTe9ZzCwkyVQN4Rx3P8A7VDLmrMOSqfpnQ5m79Z723H6nNsG/wAckkn76a/JKzMqp7PbjP1f71dS9QblIZvy5JY9riY3WGMy+kugch5B99BwCGmrlX66xvYHferdxz+oOpc4boJTDPBaTREYvJ6aD0jZVtSiqHUW07b1n7Z7nt3TXRPT26vuM2LnYZxklST1DHjSeqxLMijyoppKHNKCMlnd0tme/GyQ812zZcrJbwaeVYx9wpOCcc1P076LdZ9e73GolzMU4+DH2kLj4om0D/E8lIUDMrx3lzZ+87pk7nuErz52XM0kkjEli7N/5apwFWc5eseoMaWTa/bTbtxPqbmdxw5JNfFz9PjO8pP3XqHtVg8Fzj9V295k/UGzdPRzFcOLHbLmiBsGkkcopbvsqcPjTowmSlbn7JP+SeyGfuDkmOL67JQHkAidnxK0j80sZ9K8san/AC+/bU3BQcVfpyYkZQwsRcUIUSpNCSYG8vbGeKmq81sx+YxWrYbxcW2DHen+04t+CBPHq1EGCQ8yBqRviKqvgeBQ+sfBw962Lfc7ZztTf/XkOdPVG7uc1SIVIsLaeIsDcWPMDwqu8H3+3z81sW72mgFNNCMDqADs2g56TmA7Fp7lDPdpY4/4eJ+J4fuq5ZtzK53f5SHNj/tFT4mg8grFXlziKELsvtv7wdHdIe3mTtGYcj82nbJkURxak1OmmPzXHdUT2klTxvACpey3ux0h0T0ZuGLuhyPzPMmeVRFFrX/LCpdrj8VI5pKVjwFo/tl1/uHRvUP53DF9RFNqTNxidPqRO2o2PYwPEU8tqEwPoV0/euq/0zdUZjbzvUOThbrP5sqNYchWd+9/RDxk+N+NRgOClJaVidt9yfaHbOvNkzNi2qXA2TZoskyZCxXmnmmTQhN2LkAX+Y0tDRN1AFZvbffboRfdDeOp8g5f0Eu3Y2Dg2hu90dnlut+HE0mk0TtYqte6P9949k6/6k3VseXK6d33LMxjACzR6fLHIFJtfRwZb0uioTeZQrYm64/TLg7i3UGLiSzbnr9dcJcfICiW97hHtCDfxtSerJL6c1r2B75Y+9e62F1Tv8UuJsG0Qzx7bhRD1XVpUK625Xdu09lLowSczFap7t9bbZ1n17Lu+1+odvTHighMy6GugJby3P4jTmCibI6q3Ue7nSG3+ys3R8JyDvc+HLAQIv5XqTOdXnvy0tTXNNapzXjTRcY9P/ZafCpeCh4qzSpqKEIoQmvot5rUJVWb0L+W9/CmOpxUseuvprXuSwafVN9Wr+9zoZppgln5mr9yurvz+atU9QIoQmSen+O320JUjejpF7aeykQnJp0+XlSpFHJ9Nfz2vSJcUR/T28lqEJR6Fja3jQhOT07eW1qVCib6TV5rXpEuKlX09PltppUiSP0r+S1/CkQlf0rjXa/ZQhP8unwpUi//2Q==',
    'filemime' => 'image/jpeg',
    'filename' => 'Trellon logo.jpg',
    'filesize' => 4909,
    'metadata' => array(
      'height' => 85,
      'width' => 157,
    ),
    'rdf_mapping' => array(),
    'status' => 1,
    'title' => 'Trellon, LLC logo',
    'type' => 'image',
    'uid' => 1,
    'uri' => 'public://Trellon logo_2.jpg',
    'url_alias' => array(),
    'uuid' => '0d7682ef-d1a9-4c9d-903f-2effde89476c',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/806f88f9-b8ba-4e4a-a893-3f48371915e2',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>Contact tracking with CRM Core</p><p>[[{"fid":"0d7682ef-d1a9-4c9d-903f-2effde89476c","view_mode":"colorbox","fields":{"format":"colorbox","field_file_image_alt_text[und][0][value]":"Trellon, LLC logo","field_file_image_title_text[und][0][value]":"Trellon, LLC logo"},"type":"media","attributes":{"title":"Trellon, LLC logo","class":"colorbox media-element file-colorbox"}}]]</p>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'field_image' => array(),
    'field_tags' => array(),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'field_image' => array(
        'predicates' => array(
          0 => 'og:image',
          1 => 'rdfs:seeAlso',
        ),
        'type' => 'rel',
      ),
      'field_tags' => array(
        'predicates' => array(
          0 => 'dc:subject',
        ),
        'type' => 'rel',
      ),
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'Contact tracking with CRM Core',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/contact_tracking',
        'language' => 'und',
      ),
    ),
    'uuid' => '806f88f9-b8ba-4e4a-a893-3f48371915e2',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/b76847d6-c928-488a-b9fa-9f98786ec637',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => '<p>Every feature has it\'s own form of source tracking.</p>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'field_image' => array(),
    'field_tags' => array(),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'field_image' => array(
        'predicates' => array(
          0 => 'og:image',
          1 => 'rdfs:seeAlso',
        ),
        'type' => 'rel',
      ),
      'field_tags' => array(
        'predicates' => array(
          0 => 'dc:subject',
        ),
        'type' => 'rel',
      ),
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'How source tracking works in AbleOrganizer',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'article',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'about/source-tracking',
        'language' => 'und',
      ),
    ),
    'uuid' => 'b76847d6-c928-488a-b9fa-9f98786ec637',
  );
  $entities['ao_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/eaa3f19b-410b-4d75-ae42-05d5ad3565e6',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<h1 class="ao-marq-title">AbleOrganizer allows you to build effective, robust relationships with the communities you care about.</h1>

<div class="ao-marq equal-height-element">
<div class="ao-marq-item ao-marq-donations">
<div class="ao-marq-item-label"><span></span></div>
<div class="ao-marq-item-title"><h3>Donations</h3></div>
<div class="ao-marq-item-description">
<ul>
<li>Online and offline donation pages
<li>Source tracking
<li>LYBUNT, SYBUNT, other detail reports
</ul>
</div>
</div>
<div class="ao-marq-item ao-marq-events">
<div class="ao-marq-item-label"><span></span></div>
<div class="ao-marq-item-title"><h3>Events</h3></div>
<div class="ao-marq-item-description">
<ul>
<li>Register for paid and unpaid events
<li>Supports multiple registrations
<li>Track attendance and participation
</ul>
</div>
</div>
<div class="ao-marq-item ao-marq-petitions">
<div class="ao-marq-item-label"><span></span></div>
<div class="ao-marq-item-title"><h3>Petitions</h3></div>
<div class="ao-marq-item-description">
<ul>
<li>Collect online and offline signatures 
<li>Targeted email campaigns
<li>Track progress towards goals
</ul>
</div>
</div>
<div class="ao-marq-item ao-marq-volunteer">
<div class="ao-marq-item-label"><span></span></div>
<div class="ao-marq-item-title"><h3>Volunteers</h3></div>
<div class="ao-marq-item-description">
<ul>
<li>Register online and offline volunteers
<li>Wait lists for popular functions
<li>Manage roles and participation
</ul>
</div>
</div>
</div>

<div class="content-holder">
<h4>Getting Started</h4>
<ul>
<li><a href="about/contact_tracking">Contact tracking with CRM Core</a>
<li><a href="about/crm_core_features">CRM Core features used in AbleOrganizer</a>
<li><a href="about/forms-and-content">How forms and content work together</a>
<li><a href="about/source-tracking">How source tracking works in AbleOrganizer</a>
<li><a href="about/contacts_reports_dashboards">Using contacts, reports and dashboards in CRM Core</a>
<li><a href="about/crm-core-form-builder">Using CRM Core\'s form builder</a>
<li><a href="about/accepting_online_payments">Accepting online payments through CRM Core</a>
</lu>
</div>

<div class="content-holder">
<h4>Pro Tools for Power Users</h4>
<ul>
<li>Configure payment processors
<li>Add custom fields for capturing contact information
<li>Customize the look and feel of the site
<li>Create custom HTML emails
<li>Sending HTML emails
<li>Create custom forms for tracking offline information
<li>Integrate with MailChimp Salesforce, Constant Contact
</lu>
</div>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'Welcome to AbleOrganizer',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'front',
        'language' => 'und',
      ),
    ),
    'uuid' => 'eaa3f19b-410b-4d75-ae42-05d5ad3565e6',
  );

  return $entities;
}
